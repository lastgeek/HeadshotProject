// Headshot Game by Denis Telpesov. All Rights Reserved.

#include "HPGameModeBase.h"
#include "Player/HPBaseCharacter.h"
#include "Player/HPPlayerController.h"
#include "UI/HPGameHUD.h"

AHPGameModeBase::AHPGameModeBase()
{
	DefaultPawnClass = AHPBaseCharacter::StaticClass();
	PlayerControllerClass = AHPPlayerController::StaticClass();
	HUDClass = AHPGameHUD::StaticClass();
}