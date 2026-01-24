using UnrealBuildTool;

public class Hibiki : ModuleRules {
    public Hibiki(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;

        PublicDefinitions.Add("USE_RTTI=0");
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "BinkMediaPlayer",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "CustomMeshComponent",
            "Engine",
            "FaceFX",
            "GameplayCameras",
            "GameplayTags",
            "GameplayTasks",
            "HibikiRendering",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MovieScene",
            "Niagara",
            "PhysicsCore",
            "Slate",
            "SlateCore",
            "TangoRichTextBlock",
            "UMG"
        });
    }
}
