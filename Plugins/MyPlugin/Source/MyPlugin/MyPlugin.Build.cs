// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyPlugin : ModuleRules
{
	public MyPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
                // ע�⣬web�ο�����û����������·�����ʱ��ⲿ���Ŵ���
                // �ο� https://zhuanlan.zhihu.com/p/45398694
                // "D:/Github/UnrealEngine4/Engine/Source/Editor/LevelEditor/Public",
                "D:/Github/UnrealEngine4/Engine/Source/Runtime/CoreUObject/Public",
                "D:/Github/UnrealEngine4/Engine/Source/Runtime/Engine/Public",
                "D:/Github/UnrealEngine4/Engine/Source/Runtime/RHI/Public",
                "D:/Github/UnrealEngine4/Engine/Source/Runtime/RenderCore/Public",
                "D:/Github/UnrealEngine4/Engine/Source/Developer/AssetTools/Private",
                "D:/Github/master_szu/ue4_project/Design3D/Plugins/MyPlugin/Source/MyPlugin/Public",
				// ... add public include paths required here ...
			}
            );
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
                "D:/Github/master_szu/ue4_project/Design3D/Plugins/MyPlugin/Source/MyPlugin/private",
				// ... add other private include paths required here ...
			}
			);


        // ���CoreUObject��Engine��RHI��RenderCore��AssetTools
        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "RHI",
                "RenderCore",
                "AssetTools",
                //"SimplePixelShader",
				// ... add other public dependencies that you statically link with here ...
			}
            );

        // ɾ��InputCore,UnrealEd,LevelEditor,CoreUObject,Engine,Slate��SlateCore
        PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Projects",
				"InputCore",
				"UnrealEd",
				"LevelEditor",
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
