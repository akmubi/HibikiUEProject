#include "HbkBPMRushGaugeWidget.h"

UHbkBPMRushGaugeWidget::UHbkBPMRushGaugeWidget() {
    this->ValueAnim = NULL;
    this->DecreaseValueAnim = NULL;
    this->BonusINAnim = NULL;
    this->DropShadowAnim = NULL;
    this->DropShadowAnim_FastBPM = NULL;
    this->DropShadowAnim_HighGauge = NULL;
    this->HighLightAnim = NULL;
    this->Bar_RedAnim = NULL;
    this->Bar_YellowAnim = NULL;
    this->Bar_GreenAnim = NULL;
    this->LightningAnimation = NULL;
    this->LightningLoopAnimation = NULL;
    this->BPMRush_In_Animation = NULL;
    this->BPMRush_Out_Animation = NULL;
    this->BPMTextBlock = NULL;
    this->BonusTextBlock = NULL;
    this->HealthGauge = NULL;
    this->BehindGauge = NULL;
    this->HighlightGauge = NULL;
    this->ColorfulDropShadow = NULL;
    this->FastBPMReact_Dot = NULL;
    this->UpArrow = NULL;
    this->DownArrow = NULL;
    this->FrontGaugeTexure = NULL;
    this->BehindGaugeTexure = NULL;
    this->HighlightGaugeTexure = NULL;
    this->GaugeTimerIndicate = 3.00f;
    this->HighGaugeThreshold = 0.67f;
    this->GaugeMaxSE = NULL;
    this->LightningStrikeSE = NULL;
    this->LightningLoopSE = NULL;
    this->SpawnBigLogo_BPM_SE = NULL;
    this->SpawnBigLogo_RUSH_SE = NULL;
}

void UHbkBPMRushGaugeWidget::StartNewWave() {
}

void UHbkBPMRushGaugeWidget::SetGaugeValue(float GaugeValue, bool isDamage) {
}

void UHbkBPMRushGaugeWidget::SetBonusVisible(bool isBonus, float BonusValue) {
}

void UHbkBPMRushGaugeWidget::SetBonusValue(float BonusValue) {
}

void UHbkBPMRushGaugeWidget::PlayShadowAnimation(int32 NoteCount, bool bDownBeat) {
}

void UHbkBPMRushGaugeWidget::PlayLoopLightningAnimation(int32 NoteCount, bool bDownBeat) {
}

void UHbkBPMRushGaugeWidget::OnFinishLightningAnim() {
}

void UHbkBPMRushGaugeWidget::OnFinishBPMRUSHInAnim() {
}

void UHbkBPMRushGaugeWidget::Init() {
}

float UHbkBPMRushGaugeWidget::GetFrontGaugeValue() {
    return 0.0f;
}

float UHbkBPMRushGaugeWidget::GetBackGaugeValue() {
    return 0.0f;
}

void UHbkBPMRushGaugeWidget::GaugeMaterialInitialize() {
}

void UHbkBPMRushGaugeWidget::BeginBossBattleAnim() {
}

void UHbkBPMRushGaugeWidget::AddGaugeValue(float AddValue, bool isDamage) {
}


