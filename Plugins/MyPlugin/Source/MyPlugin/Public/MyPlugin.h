// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "SimplePixelShader.h"

class FToolBarBuilder;
class FMenuBuilder;

class FMyPluginModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	// ��UE�򿪵�ʱ��ִ��
	virtual void StartupModule() override;
	// �ڱ༭�������Ǵ��ڣ��رյ�ʱ��ִ��
	virtual void ShutdownModule() override;
	
	/** This function will be bound to Command (by default it will bring up plugin window) */
	void PluginButtonClicked();
	
private:

	void AddToolbarExtension(FToolBarBuilder& Builder);
	void AddMenuExtension(FMenuBuilder& Builder);

	TSharedRef<class SDockTab> OnSpawnPluginTab(const class FSpawnTabArgs& SpawnTabArgs);

private:
	TSharedPtr<class FUICommandList> PluginCommands;
};
