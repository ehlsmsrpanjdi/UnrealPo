// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ModularCar : ModuleRules
{
	public ModularCar(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
