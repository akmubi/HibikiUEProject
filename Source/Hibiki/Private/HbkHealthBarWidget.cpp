#include "HbkHealthBarWidget.h"

UHbkHealthBarWidget::UHbkHealthBarWidget() {
    this->BeforeHealthGrowthCount = 999;
    this->isHealthGrowth = false;
    this->GrowEffect_70 = NULL;
    this->GrowEffect_80 = NULL;
    this->GrowEffect_90 = NULL;
    this->GrowEffect_100 = NULL;
    this->GrowEffect_110 = NULL;
    this->GrowEffect_120 = NULL;
    this->GrowEffect_130 = NULL;
    this->GrowEffect_140 = NULL;
    this->GrowEffect_150 = NULL;
    this->GrowEffect_160 = NULL;
    this->GrowEffect_170 = NULL;
    this->GrowEffect_180 = NULL;
    this->GrowEffect_190 = NULL;
    this->GrowEffect_200 = NULL;
    this->EasingMainHealthType = EEasingFunc::Linear;
    this->EasingMainHealthTime = 0.10f;
    this->DeathblowGaugeNum = 0;
    this->EasingMainDeathblowGaugeType = EEasingFunc::Linear;
    this->EasingMainDeathblowGaugeTime = 0.15f;
    this->RhythmLevel = 0;
    this->IsHealthChange = false;
    this->IsHealthHeel = false;
    this->IsDeathblowGaugeChange = false;
    this->ReverbGaugeBase = NULL;
    this->PartnerGauges = NULL;
    this->SwapSPGaugeAnim = NULL;
    this->SwapSPGaugeAnim_GrowthOnly = NULL;
    this->isSwapGrowthTiming = false;
    this->SPGrowthAnim = NULL;
    this->SPBar_Front_OutLine = NULL;
    this->SPBar_Back_OutLine = NULL;
    this->GamePad_SPIcon = NULL;
    this->KeyboardAndMouse_SPIcon = NULL;
    this->isGrowing = false;
}

void UHbkHealthBarWidget::UseDeathblowGauge(EHbkReverbGaugeConsumeType ConsumeType) {
}

void UHbkHealthBarWidget::UpdateReverbeGauge() {
}

void UHbkHealthBarWidget::UpdateHealthGauge() {
}


void UHbkHealthBarWidget::SwitchReverbOutLineVisible() {
}

void UHbkHealthBarWidget::SwapSPGauge() {
}

void UHbkHealthBarWidget::StartRespawn() {
}

void UHbkHealthBarWidget::StartHealthHeel(float Value) {
}

void UHbkHealthBarWidget::StartHealthDamage(float Value) {
}

void UHbkHealthBarWidget::StartDeathblowGauge() {
}

void UHbkHealthBarWidget::SetSpAttackData(int32 SlotIndex, const TArray<FGameplayTag>& SpAttackTagList) {
}

void UHbkHealthBarWidget::SetReverbeGaugeData() {
}

void UHbkHealthBarWidget::SetOverChargeData() {
}

void UHbkHealthBarWidget::SetLifeTankData() {
}


void UHbkHealthBarWidget::SetHealthBarData() {
}

void UHbkHealthBarWidget::SelectPartner(int32 Index) {
}

void UHbkHealthBarWidget::RhythmTimming(int32 NoteCount, bool bDownBeat) {
}

void UHbkHealthBarWidget::RhythmNotBestTiming() {
}

void UHbkHealthBarWidget::RhythmBestTiming(int32 Count) {
}

void UHbkHealthBarWidget::ReturnPartner(int32 Index, AHbkPartnerCharacterBase* Partner) {
}

void UHbkHealthBarWidget::Receive_OnChangeSpecialAttack(int32 SlotIndex, const FGameplayTag& SpAttackTag) {
}


void UHbkHealthBarWidget::PlayReactAnim() {
}


void UHbkHealthBarWidget::ParrySuccess() {
}

void UHbkHealthBarWidget::ParryPerfect() {
}

void UHbkHealthBarWidget::OnLatestFollowDeviceChanged(EHbkHUDFollowDevice LatestDeviceType) {
}

void UHbkHealthBarWidget::OnFinishedSwapSPGaugeAnimation() {
}

void UHbkHealthBarWidget::LearnedAbility(EHbkPlayerAppendAbilityType AbilityType) {
}


void UHbkHealthBarWidget::InitOverCharge() {
}

void UHbkHealthBarWidget::GrowthReverbGauge() {
}

int32 UHbkHealthBarWidget::GetNextSPGaugeGrowth() {
    return 0;
}

void UHbkHealthBarWidget::EndBattle() {
}

void UHbkHealthBarWidget::DeathblowButtonOn() {
}

void UHbkHealthBarWidget::DeathblowButtonOff() {
}

void UHbkHealthBarWidget::CreateLifeTank(int32 Index) {
}

void UHbkHealthBarWidget::ConsumeOverCharge(int32 Count) {
}

bool UHbkHealthBarWidget::CheckSwapSPGauge() {
    return false;
}

void UHbkHealthBarWidget::ChangeRhythmRank(int32 NewRank, int32 OldRank) {
}

void UHbkHealthBarWidget::ChangeDrawDeathblowGage() {
}

void UHbkHealthBarWidget::ChangeDrawCharSelect() {
}

void UHbkHealthBarWidget::ChangeCharacter(AHbkPlayerCharacterBase* NewPlayerCharacter) {
}

void UHbkHealthBarWidget::CallPartner(int32 Index, AHbkPartnerCharacterBase* Partner) {
}






























void UHbkHealthBarWidget::BeginBattle() {
}

void UHbkHealthBarWidget::BeatHitSuccess() {
}

void UHbkHealthBarWidget::AccumlateLifeTanks(const TArray<float>& LifeTankRateList) {
}

void UHbkHealthBarWidget::AccumlatedLifeTankData(int32 Index) {
}


