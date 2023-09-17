// Headshot Game by Denis Telpesov. All Rights Reserved.

#include "UI/HPGameHUD.h"
#include "Engine/Canvas.h"
#include "Blueprint/UserWidget.h"


void AHPGameHUD::DrawHUD()
{
	Super::DrawHUD();

	//DrawCrossLine();
}

void AHPGameHUD::BeginPlay()
{
	Super::BeginPlay();

	auto PlayerHUDWidget = CreateWidget<UUserWidget>(GetWorld(), PlayerHUDWidgetClass);
	if (PlayerHUDWidget)
	{
		PlayerHUDWidget->AddToViewport();
	}
}

void AHPGameHUD::DrawCrossLine()
{
	TInterval<float> ScreenCenter = { Canvas->SizeX * 0.5f, Canvas->SizeY * 0.5f };

	int32 LineLenght = 10;
	int32 LineThickness = 2;

	FLinearColor LineColor = FLinearColor::Green;

	DrawLine(ScreenCenter.Min - LineLenght, ScreenCenter.Max, ScreenCenter.Min + LineLenght, ScreenCenter.Max, LineColor, LineThickness);
	DrawLine(ScreenCenter.Min, ScreenCenter.Max - LineLenght, ScreenCenter.Min, ScreenCenter.Max + LineLenght, LineColor, LineThickness);
}
