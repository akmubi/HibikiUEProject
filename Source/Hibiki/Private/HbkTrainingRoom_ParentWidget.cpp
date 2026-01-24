#include "HbkTrainingRoom_ParentWidget.h"

UHbkTrainingRoom_ParentWidget::UHbkTrainingRoom_ParentWidget() {
    this->CommandSettingWidget = NULL;
    this->EnemyAISettingWidget = NULL;
    this->RecoverSPGaugeSettingWidget = NULL;
    this->EnemyTypeSettingWidget = NULL;
    this->EnemyHPGaugeSettingWidget = NULL;
    this->EnemyDontDieSettingWidget = NULL;
    this->RhythmAssistSettingWidget = NULL;
    this->MusicTempoSettingWidget = NULL;
    this->ResetExecuteSound = NULL;
    this->ChangeValueSound = NULL;
    this->ListBox = NULL;
    this->ListControl = NULL;
    this->ReturnToHideoutButton = NULL;
}

void UHbkTrainingRoom_ParentWidget::OnMouseOverSettingItem(UHbkTrainingRoom_SelectItemBaseWidget* SettingItem) {
}


