// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

//----------------------------------------------------------------------
// https://www.cnblogs.com/jqm304775992/p/8996470.html
// �������ڡ��༭��Standalone���ڡ��Ĳ��
// https://zhuanlan.zhihu.com/p/66514192
// �����4Shaderƪ����ʼ��д��򵥵�Shader
//----------------------------------------------------------------------

#include "MyPlugin.h"
#include "MyPluginStyle.h"
#include "MyPluginCommands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Projects/Public/Interfaces/IPluginManager.h"

static const FName MyPluginTabName("MyPlugin");

#define LOCTEXT_NAMESPACE "FMyPluginModule"

void FMyPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	// ע��༭��������
	FMyPluginStyle::Initialize();
	FMyPluginStyle::ReloadTextures();

	// ע��༭���������
	FMyPluginCommands::Register();
	
	// ��������༭������
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FMyPluginCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FMyPluginModule::PluginButtonClicked),
		FCanExecuteAction());
		
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	
	{
		// FExtender�������ToolBar��Menu����չ
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		// WindowLayout������ӵ�������
		MenuExtender->AddMenuExtension("WindowLayout", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FMyPluginModule::AddMenuExtension));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}
	
	{
		// ������ӵ�ToolBar��
		/* AddToolBarExtension
		��һ����������ָ��ӵ���������Settings���֣�
		�ڶ�����������������ֵ�λ�ã�ǰ�棬������һ����
		��������������ǰ�洴����������ݽ�ȥ��
		���ĸ�����������ӵ��༭���İ�ť��
		*/
		TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
		ToolbarExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FMyPluginModule::AddToolbarExtension));
		
		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	}
	
	// ע��Tab��FGlobalTabmanager�У��������ʹ��InvokeTab��ȡ
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(MyPluginTabName, FOnSpawnTab::CreateRaw(this, &FMyPluginModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FMyPluginTabTitle", "MyPlugin"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);

	// ��usf����·����Shaderʵ�ֺ��е�����·����Ӧ��PluginShaderDir����Ϊ��ʵ·����
	// Ҫ����ͷ�ļ�#include "Projects/Public/Interfaces/IPluginManager.h"
	FString PluginShaderDir = FPaths::Combine(IPluginManager::Get().FindPlugin(TEXT("MyPlugin"))->GetBaseDir(), TEXT("Shaders"));
	// AddShaderSourceDirectoryMapping���趨һ������·��������ʵ·����
	AddShaderSourceDirectoryMapping(TEXT("/Plugins/MyPlugin"), PluginShaderDir);
}

void FMyPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FMyPluginStyle::Shutdown();

	FMyPluginCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(MyPluginTabName);
}

// ע��Tab��ʹ��Slate���֣�������SDockTab
TSharedRef<SDockTab> FMyPluginModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	FText WidgetText = FText::Format(
		LOCTEXT("WindowWidgetText", "Add code to {0} in {1} to override this window's contents"),
		FText::FromString(TEXT("FMyPluginModule::OnSpawnPluginTab")),
		FText::FromString(TEXT("MyPlugin.cpp"))
		);

	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			// Put your tab content here!
			SNew(SBox)
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			[
				SNew(STextBlock)
				.Text(WidgetText)
			]
		];
}

void FMyPluginModule::PluginButtonClicked()
{
	// �������
	FGlobalTabmanager::Get()->InvokeTab(MyPluginTabName);
}

void FMyPluginModule::AddMenuExtension(FMenuBuilder& Builder)
{
	// ʹ��AddMenuEntry���뵽Builder�У�ע�ͻ��Menu����ʧ
	Builder.AddMenuEntry(FMyPluginCommands::Get().OpenPluginWindow);
}

void FMyPluginModule::AddToolbarExtension(FToolBarBuilder& Builder)
{
	// ע�ᵽToolBar��ע�����ʾ��ToolBar
	Builder.AddToolBarButton(FMyPluginCommands::Get().OpenPluginWindow);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMyPluginModule, MyPlugin)