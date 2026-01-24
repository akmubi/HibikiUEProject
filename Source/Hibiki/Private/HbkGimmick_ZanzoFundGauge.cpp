#include "HbkGimmick_ZanzoFundGauge.h"

AHbkGimmick_ZanzoFundGauge::AHbkGimmick_ZanzoFundGauge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->MaxFund = 50000;
    this->bActive = false;
    this->UsedFund = 0;
    this->BossGaugeWidget = NULL;
}

void AHbkGimmick_ZanzoFundGauge::UseFund(int32 Fund) {
}


