// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class mygame_2 : ModuleRules
{
	public mygame_2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
