#include "HbkGraffitiCollect.h"

AHbkGraffitiCollect::AHbkGraffitiCollect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SettingsData = NULL;
    this->BackButtonWidgetClass = NULL;
    this->CameraComp = NULL;
    this->BackButtonWidget = NULL;
}

void AHbkGraffitiCollect::OnTalkEnded(const FHbkTalkContext TalkContext) {
}

void AHbkGraffitiCollect::OnInputCancel() {
}


