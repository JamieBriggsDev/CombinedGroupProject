// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CombinedGroupProject : ModuleRules
{
	public CombinedGroupProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
		
		 PublicDependencyModuleNames.AddRange(new string[] { 
		"OnlineSubsystem",
		"OnlineSubsystemUtils"
		
		});
		
		DynamicallyLoadedModuleNames.Add("OnlineSubsystemSteam");
	}
}
