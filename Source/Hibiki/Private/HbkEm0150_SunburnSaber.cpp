#include "HbkEm0150_SunburnSaber.h"

AHbkEm0150_SunburnSaber::AHbkEm0150_SunburnSaber(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HologramAppearModeTime = 2.00f;
    this->NormalModeTime = 10.00f;
    this->HologramStayModeTime = 10.00f;
    this->HologramDisappearModeTime = 10.00f;
    this->StateTimerStopTime = 1.00f;
    this->HologramChangeSE = NULL;
}

void AHbkEm0150_SunburnSaber::StopTimer() {
}


