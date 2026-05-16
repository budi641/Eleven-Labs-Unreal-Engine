using UnrealBuildTool;

public class ElevenLabs : ModuleRules
{
	public ElevenLabs(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"HTTP",
			"Json",
			"JsonUtilities",
			"DeveloperSettings"
		});

		PrivateDependencyModuleNames.AddRange(new[]
		{
			"Projects"
		});
	}
}
