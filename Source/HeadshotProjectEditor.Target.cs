// Headshot Game. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class HeadshotProjectEditorTarget : TargetRules
{
	public HeadshotProjectEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "HeadshotProject" } );
	}
}
