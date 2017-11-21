using UnrealBuildTool;
using System.IO;
using System;

public class OnlineSubsystemGameSparks : ModuleRules
{
    #if WITH_FORWARDED_MODULE_RULES_CTOR
    public OnlineSubsystemGameSparks(ReadOnlyTargetRules Target) : base(Target) // > 4.15
    #else
    public OnlineSubsystemGameSparks(TargetInfo Target) // < 4.15
    #endif
    {
        Definitions.Add("GAMESPARKS_PACKAGE=1");
        Definitions.Add("ONLINESUBSYSTEMGAMESPARKS_PACKAGE=1");

        PrivateDependencyModuleNames.AddRange(
            new string[] {
                "Core",
                "CoreUObject",
                "OnlineSubsystem",
                "Engine",
                "Json",
                "GameSparks",
            }
        );

        PrivateIncludePaths.Add("Private");

        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
    }

    private string ModulePath
    {
        get { return ModuleDirectory; }
    }

    private string GameSparksPath
    {
        get { return Path.GetFullPath(Path.Combine(ModulePath, "..", "GameSparksBaseSDK")); }
    }
}
