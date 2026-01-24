#include "HbkEnemyHealthBarWidget.h"

UHbkEnemyHealthBarWidget::UHbkEnemyHealthBarWidget() {
    this->BasePanel = NULL;
    this->EnemyHP_Base_Green = NULL;
    this->EnemyHP_Base_White = NULL;
    this->MaxHealth_Text = NULL;
    this->CurrentHealth_Text = NULL;
    this->Bar_GreenImg = NULL;
    this->Bar_WhiteImg = NULL;
    this->Damage_Anim = NULL;
    this->GaugeValue_Anim = NULL;
    this->OffsetX = 0.00f;
    this->OffsetY = 0.00f;
}

void UHbkEnemyHealthBarWidget::UpdateGaugebyDamageComp() {
}

void UHbkEnemyHealthBarWidget::UpdateGauge(float CurrentValue, float MaxValue) {
}

void UHbkEnemyHealthBarWidget::MaterialSetting() {
}


