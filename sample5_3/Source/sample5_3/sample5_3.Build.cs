// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class sample5_3 : ModuleRules
{
	public sample5_3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
