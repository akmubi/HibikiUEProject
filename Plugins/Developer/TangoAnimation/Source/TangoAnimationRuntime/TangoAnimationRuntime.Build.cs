using UnrealBuildTool;

public class TangoAnimationRuntime : ModuleRules {
    public TangoAnimationRuntime(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimGraphRuntime",
            "AnimationCore",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
