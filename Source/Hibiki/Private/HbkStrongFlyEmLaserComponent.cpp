#include "HbkStrongFlyEmLaserComponent.h"

UHbkStrongFlyEmLaserComponent::UHbkStrongFlyEmLaserComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LaserAttackLength = 5000.00f;
    this->DivLaserCheckAngle = 10.00f;
    this->LaserCheckChannel = TraceTypeQuery1;
    this->LaserDamageType = NULL;
    this->AkEvent_Launch = NULL;
    this->AkEvent_Delete = NULL;
    this->pLaserEffect = NULL;
}


