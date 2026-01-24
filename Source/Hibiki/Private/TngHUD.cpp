#include "TngHUD.h"

ATngHUD::ATngHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->FocusWidget = NULL;
    this->LayerWidget = NULL;
}

void ATngHUD::SetDrawWidgetType(APlayerController* PlayerController, EDrawWidgetType ChangeDrawType) {
}

EDrawWidgetType ATngHUD::GetDrawWidgetType(APlayerController* PlayerController) {
    return EDrawWidgetType::None;
}


