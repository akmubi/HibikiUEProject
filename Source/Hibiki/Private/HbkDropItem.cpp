#include "HbkDropItem.h"

AHbkDropItem::AHbkDropItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AddGaugeValue = 0.00f;
    this->PopupDir = 0.00f;
    this->PopupPowerMin = 350.00f;
    this->PopupPowerMax = 600.00f;
    this->MoveSpeedMax = 5000.00f;
    this->MoveSpeedAccel = 2500.00f;
    this->PhysicsMoveLimitTime = 3.00f;
    this->EmissiveScale = 7.50f;
}


