#include "HbkVS_StreamingViewerHUD.h"

AHbkVS_StreamingViewerHUD::AHbkVS_StreamingViewerHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->StateUWClass = NULL;
    this->DebugUWClass = NULL;
    this->DebugRSSUWClass = NULL;
}

UHbkVS_StreamingViewerStateWidget* AHbkVS_StreamingViewerHUD::GetStateWidget() {
    return NULL;
}

UHbkDebugWidget* AHbkVS_StreamingViewerHUD::GetDebugWidget() {
    return NULL;
}

UUserWidget* AHbkVS_StreamingViewerHUD::GetDebugRSSWidget() {
    return NULL;
}


