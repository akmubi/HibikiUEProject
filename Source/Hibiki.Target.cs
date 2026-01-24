using UnrealBuildTool;

public class HibikiTarget : TargetRules {
	public HibikiTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Hibiki",
			"HibikiRendering"
		});
	}
}
