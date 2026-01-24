#include "HbkHealthBarBaseWidget.h"

UHbkHealthBarBaseWidget::UHbkHealthBarBaseWidget() {
    this->GaugeRate1 = 0.00f;
    this->GaugeRate2 = 0.00f;
    this->TotalHealthRate = 0.00f;
    this->Hp_70 = NULL;
    this->Hp_80 = NULL;
    this->Hp_90 = NULL;
    this->Hp_100 = NULL;
    this->Hp_110 = NULL;
    this->Hp_120 = NULL;
    this->Hp_130 = NULL;
    this->Hp_140 = NULL;
    this->Hp_150 = NULL;
    this->Hp_160 = NULL;
    this->Hp_170 = NULL;
    this->Hp_180 = NULL;
    this->Hp_190 = NULL;
    this->Hp_200 = NULL;
    this->Damage_70 = NULL;
    this->Damage_80 = NULL;
    this->Damage_90 = NULL;
    this->Damage_100 = NULL;
    this->Damage_110 = NULL;
    this->Damage_120 = NULL;
    this->Damage_130 = NULL;
    this->Damage_140 = NULL;
    this->Damage_150 = NULL;
    this->Damage_160 = NULL;
    this->Damage_170 = NULL;
    this->Damage_180 = NULL;
    this->Damage_190 = NULL;
    this->Damage_200 = NULL;
    this->DropShadow_70 = NULL;
    this->DropShadow_80 = NULL;
    this->DropShadow_90 = NULL;
    this->DropShadow_100 = NULL;
    this->DropShadow_110 = NULL;
    this->DropShadow_120 = NULL;
    this->DropShadow_130 = NULL;
    this->DropShadow_140 = NULL;
    this->DropShadow_150 = NULL;
    this->DropShadow_160 = NULL;
    this->DropShadow_170 = NULL;
    this->DropShadow_180 = NULL;
    this->DropShadow_190 = NULL;
    this->DropShadow_200 = NULL;
    this->SPGauge1 = NULL;
    this->SPGauge2 = NULL;
    this->SPGauge3 = NULL;
    this->SPGauge4 = NULL;
    this->SPGauge5 = NULL;
    this->SPGauge6 = NULL;
    this->SPGauge7 = NULL;
    this->SPGauge8 = NULL;
    this->SPGauge_OutLine1 = NULL;
    this->SPGauge_OutLine2 = NULL;
    this->SPGauge_OutLine3 = NULL;
    this->SPGauge_OutLine4 = NULL;
    this->SPGauge_OutLine5 = NULL;
    this->SPGauge_OutLine6 = NULL;
    this->SPGauge_OutLine7 = NULL;
    this->SPGauge_OutLine8 = NULL;
    this->SPGauge_BG1 = NULL;
    this->SPGauge_BG2 = NULL;
    this->SPGauge_BG3 = NULL;
    this->SPGauge_BG4 = NULL;
    this->SPGauge_BG5 = NULL;
    this->SPGauge_BG6 = NULL;
    this->SPGauge_BG7 = NULL;
    this->SPGauge_BG8 = NULL;
    this->SPGauge_Shadow1_Dammy = NULL;
    this->SPGauge_Shadow2 = NULL;
    this->SPGauge_Shadow3 = NULL;
    this->SPGauge_Shadow4 = NULL;
    this->SPGauge_Shadow5_Dammy = NULL;
    this->SPGauge_Shadow6 = NULL;
    this->SPGauge_Shadow7 = NULL;
    this->SPGauge_Shadow8 = NULL;
    this->SPGauge_Glow1 = NULL;
    this->SPGauge_Glow2 = NULL;
    this->SPGauge_Glow3 = NULL;
    this->SPGauge_Glow4 = NULL;
    this->SPGauge_Glow5 = NULL;
    this->SPGauge_Glow6 = NULL;
    this->SPGauge_Glow7 = NULL;
    this->SPGauge_Glow8 = NULL;
    this->AddSPBar1_Anim = NULL;
    this->AddSPBar2_Anim = NULL;
    this->AddSPBar3_Anim = NULL;
    this->AddSPBar4_Anim = NULL;
    this->LifeTankIcon_1 = NULL;
    this->LifeTankIcon_2 = NULL;
    this->LifeTankIcon_3 = NULL;
    this->OverchargeTankIcon_1 = NULL;
    this->OverchargeTankIcon_2 = NULL;
    this->Battery_1 = ESlateVisibility::Collapsed;
    this->Battery_2 = ESlateVisibility::Collapsed;
    this->ItemIconPosition1_Anim = NULL;
    this->ItemIconPosition2_Anim = NULL;
    this->SPIcon_On = NULL;
    this->SPIcon_Off = NULL;
    this->React_Anim1 = NULL;
    this->React_Anim2 = NULL;
    this->React_Anim3 = NULL;
    this->React_Anim4 = NULL;
}

void UHbkHealthBarBaseWidget::SetReverbMaterialValue(int32 GaugeNum, float Rate) {
}



void UHbkHealthBarBaseWidget::ReverbGauge_SwapList(TArray<UImage*>& ImageList) {
}

void UHbkHealthBarBaseWidget::InitSPMat(float Value) {
}

void UHbkHealthBarBaseWidget::InitHPMat(float Value) {
}


