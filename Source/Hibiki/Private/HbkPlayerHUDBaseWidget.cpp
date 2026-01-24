#include "HbkPlayerHUDBaseWidget.h"
#include "Templates/SubclassOf.h"

UHbkPlayerHUDBaseWidget::UHbkPlayerHUDBaseWidget() {
    this->PresetAsset = NULL;
    this->BossGaugeParent = NULL;
    this->BattleResultBase = NULL;
    this->BattleScoreBase = NULL;
    this->RhythmMeterBase = NULL;
    this->RhythmAssistBase = NULL;
    this->BaseOverlay = NULL;
}

void UHbkPlayerHUDBaseWidget::SetWidgetVisibilitiesPreset(EHbkPlayerHUDPresetType PresetType) {
}

void UHbkPlayerHUDBaseWidget::SetWidgetVisibilitiesData(TSubclassOf<UHbkPlayerHUDDataObject> PresetDeta, bool bIsChangeDrawChangeFlag) {
}

void UHbkPlayerHUDBaseWidget::SetSpecifyWidgetVisibility(EHbkPlayerHUDWidgetType WidgetType, ESlateVisibility Vis) {
}

bool UHbkPlayerHUDBaseWidget::RemoveHUDWidget(EHbkPlayerHUDWidgetType WidgetType) {
    return false;
}

void UHbkPlayerHUDBaseWidget::Init() {
}

UTngUserWidget* UHbkPlayerHUDBaseWidget::GetHUDWidget(EHbkPlayerHUDWidgetType WidgetType) {
    return NULL;
}

void UHbkPlayerHUDBaseWidget::ForceSetVisibility(bool bIsVisible) {
}

UTngUserWidget* UHbkPlayerHUDBaseWidget::CreateHUDWidget(EHbkPlayerHUDWidgetType WidgetType) {
    return NULL;
}


