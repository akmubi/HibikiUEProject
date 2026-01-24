#include "HbkPlayerAutoComboDataAsset.h"

UHbkPlayerAutoComboDataAsset::UHbkPlayerAutoComboDataAsset() {
    this->UseToAirComboRate = 50.00f;
    this->UseDistance_Dash = 500.00f;
    this->UseDistance_NoChoice_CloseDash = 700.00f;
    this->UseDistance_Magnet = 1000.00f;
    this->UseHeightDiff_PlayerToAirAction = 200.00f;
    this->UseDistance_AfterAttackMagnet = 300.00f;
    this->UseMagnetRate_OnCombo = 100.00f;
    this->ForceCommandReceiveTimeCount = 2.00f;
    this->UsePartnerRateOnNormal_Min = 15.00f;
    this->UsePartnerRateOnNormal_Max = 25.00f;
    this->UsePartnerOnNormalEnemyNum_Min = 1;
    this->UsePartnerOnNormalEnemyNum_Max = 5;
    this->UseJamComboRate = 30.00f;
    this->UseSPAttackRate = 5.00f;
    this->UseSPAttackRate_Boost = 50.00f;
    this->UseSPAttackEnemyNum_Boost = 3;
    this->UseSPAttackGaugeNum_Boost = 4;
    this->SearchEnemyDistance = 3000.00f;
    this->EnemyDistance_Short = 600.00f;
    this->EnemyDistance_Far = 1500.00f;
}


