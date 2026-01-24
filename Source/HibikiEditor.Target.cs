using UnrealBuildTool;

public class HibikiEditorTarget : TargetRules {
	public HibikiEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Hibiki",
			"HibikiRendering",
		});
	}
}
