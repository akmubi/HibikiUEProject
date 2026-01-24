#include "TngWidgetFunction.h"

UTngWidgetFunction::UTngWidgetFunction() {
}

void UTngWidgetFunction::PlayTngAnimation(UUserWidget* Target, UWidgetAnimation* InAnimation, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed) {
}

bool UTngWidgetFunction::IsUseGamepad(UObject* WorldContextObject) {
    return false;
}

bool UTngWidgetFunction::IsDownStickButton(UObject* WorldContextObject, ETngKeyButtonMap Key, float AxisDeadZone) {
    return false;
}

FVector2D UTngWidgetFunction::GetLastMousePosition(UObject* WorldContextObject) {
    return FVector2D{};
}

TArray<ETngKeyButtonMap> UTngWidgetFunction::GetKeyMouseUpButtons(UObject* WorldContextObject, FPointerEvent InMouseEvent) {
    return TArray<ETngKeyButtonMap>();
}

TArray<ETngKeyButtonMap> UTngWidgetFunction::GetKeyMouseDownButtons(UObject* WorldContextObject, FPointerEvent InMouseEvent) {
    return TArray<ETngKeyButtonMap>();
}

TArray<ETngKeyButtonMap> UTngWidgetFunction::GetKeyButtons(UObject* WorldContextObject, FKey TargetKey) {
    return TArray<ETngKeyButtonMap>();
}

TArray<ETngKeyAxisMap> UTngWidgetFunction::GetKeyAxis(UObject* WorldContextObject, FKey TargetKey) {
    return TArray<ETngKeyAxisMap>();
}

UWidget* UTngWidgetFunction::GetFocusWidgetInAllChildren(UWidget* CheckWidget) {
    return NULL;
}

int32 UTngWidgetFunction::GetCurrentViewMode(const APlayerController* PlayerController) {
    return 0;
}

bool UTngWidgetFunction::GetButtonRelease(UObject* WorldContextObject, ETngKeyButtonMap Key) {
    return false;
}

bool UTngWidgetFunction::GetButtonPressed(UObject* WorldContextObject, ETngKeyButtonMap Key) {
    return false;
}

bool UTngWidgetFunction::GetButtonPress(UObject* WorldContextObject, ETngKeyButtonMap Key) {
    return false;
}

float UTngWidgetFunction::GetAxisValue(UObject* WorldContextObject, ETngKeyAxisMap Key) {
    return 0.0f;
}

bool UTngWidgetFunction::GetAxisRelease(UObject* WorldContextObject, ETngKeyAxisMap Key) {
    return false;
}

bool UTngWidgetFunction::GetAxisPressed(UObject* WorldContextObject, ETngKeyAxisMap Key) {
    return false;
}

bool UTngWidgetFunction::GetAxisPress(UObject* WorldContextObject, ETngKeyAxisMap Key) {
    return false;
}

void UTngWidgetFunction::DrawWidgetToRenderTarget(UTextureRenderTarget2D* Target, UUserWidget* Widget, FVector2D Size, bool UseGamma, float DeltaTime, FVector2D OffsetPos) {
}


