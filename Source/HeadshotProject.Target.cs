// Headshot Game. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class HeadshotProjectTarget : TargetRules
{
	public HeadshotProjectTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "HeadshotProject" } );
	}
}
