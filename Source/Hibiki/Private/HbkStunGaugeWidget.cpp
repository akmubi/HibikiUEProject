#include "HbkStunGaugeWidget.h"

UHbkStunGaugeWidget::UHbkStunGaugeWidget() {
    this->OffsetX = 0.00f;
    this->OffsetY = 0.00f;
    this->Gauge_Yellow_Blur = NULL;
    this->Gauge_Yellow = NULL;
    this->LocationPanel = NULL;
    this->Star_1 = NULL;
    this->Star_2 = NULL;
    this->Star_3 = NULL;
    this->Star_Bro_1 = NULL;
    this->Star_Bro_2 = NULL;
    this->Star_Bro_3 = NULL;
    this->Star_Bro_Blur_1 = NULL;
    this->Star_Bro_Blur_2 = NULL;
    this->Star_Bro_Blur_3 = NULL;
    this->Tex_YellowGauge = NULL;
    this->Tex_YellowGaugeBlur = NULL;
    this->Anim_Brake = NULL;
    this->Anim_Damage = NULL;
    this->Anim_HealGlow = NULL;
    this->Anim_Recover = NULL;
    this->Anim_RecoverMax = NULL;
    this->Anim_RecoverFinish = NULL;
    this->Anim_SetGaugeRate = NULL;
    this->Anim_Activate = NULL;
    this->Anim_Deactivate = NULL;
    this->Anim_KorsicaBlast = NULL;
    this->Anim_EndKorsicaBlast = NULL;
}

void UHbkStunGaugeWidget::ToughDeactive() {
}

void UHbkStunGaugeWidget::ToughDamaged(float PreToughValue, float DamagedToughValue) {
}

void UHbkStunGaugeWidget::ToughActive() {
}

void UHbkStunGaugeWidget::SetKorsicaBlastRepeatAnim() {
}

void UHbkStunGaugeWidget::SetHealGlowRepeatAnim() {
}

void UHbkStunGaugeWidget::SetGaugeRate(float GaugeRate) {
}

void UHbkStunGaugeWidget::PlayAnim_HealGlow(int32 NoteCount, bool bDownBeat) {
}

void UHbkStunGaugeWidget::MultiToughDeactive(int32 Index, const FHbkMultipleToughParam& ToughParam, AActor* DamageCauser) {
}

void UHbkStunGaugeWidget::MultiToughDamaged(int32 Index, AActor* DamageCauser, const UDamageType* InDamageType) {
}

void UHbkStunGaugeWidget::MultiToughActive(int32 Index, const FHbkMultipleToughParam& ToughParam) {
}

void UHbkStunGaugeWidget::Init(AHbkCharacter* HbkCharacter, UHbkStunGaugeManagerWidget* Owner) {
}

void UHbkStunGaugeWidget::Gauge_RecoverMax() {
}

void UHbkStunGaugeWidget::Gauge_RecoverFinish() {
}

void UHbkStunGaugeWidget::Gauge_Recover() {
}

void UHbkStunGaugeWidget::Gauge_KorsicaBlastRepeat(int32 NoteCount, bool bDownBeat) {
}

void UHbkStunGaugeWidget::Gauge_Deactivate() {
}

void UHbkStunGaugeWidget::Gauge_Damage() {
}

void UHbkStunGaugeWidget::Gauge_Brake() {
}

void UHbkStunGaugeWidget::Gauge_Activate() {
}


