#include "HbkEm6000_CoinDiveController.h"

AHbkEm6000_CoinDiveController::AHbkEm6000_CoinDiveController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TurnCountMax = 3;
    this->MovingEmbankmentClass = NULL;
    this->MovingEmbankmentMax = 2;
    this->MovingEmbankmentPlayerDistance = 1000.00f;
    this->PopupEmbankmentClass = NULL;
    this->PopupArmStrongStatueClass = NULL;
    this->PopupEmbankmentMax = 4;
    this->ArmStrongStatueNearLength = 150.00f;
}

void AHbkEm6000_CoinDiveController::TestSpawnPopupEmbankment() {
}

void AHbkEm6000_CoinDiveController::TestSpawnMovingEmbankment() {
}

void AHbkEm6000_CoinDiveController::TestDestroyPopupEmbankment() {
}

void AHbkEm6000_CoinDiveController::TestDestroyMovingEmbankment() {
}


