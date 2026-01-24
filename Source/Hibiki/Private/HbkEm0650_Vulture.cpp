#include "HbkEm0650_Vulture.h"
#include "HbkStrongFlyEmLaserComponent.h"

AHbkEm0650_Vulture::AHbkEm0650_Vulture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReactionCommonDamageSectionName_OnTired.AddDefaulted(3);
    this->St10EventTriggerHPRate = 0.20f;
    this->PriorityAttackTriggerCount = 4;
    this->TornadoOffsetAngle = -5.00f;
    this->WingAttackTypeMax = 3;
    this->ForceSettingWingAttackType = -1;
    this->OnDangerMaterial_Low = NULL;
    this->OnDangerMaterial_High = NULL;
    this->OnSafetyMaterial = NULL;
    this->OnDangerMID_ForBeatSign_Low = NULL;
    this->OnDangerMID_ForBeatSign_High = NULL;
    this->OnSafetyMID_ForBeatSign = NULL;
    this->EmLaserComp = CreateDefaultSubobject<UHbkStrongFlyEmLaserComponent>(TEXT("EmLaserMesh"));
    this->pLaserEffect = NULL;
}

void AHbkEm0650_Vulture::SetUpProjectile(FName SlotName, AHbkProjectile* Projectile) {
}

void AHbkEm0650_Vulture::SetEnabledSt10Event(bool bEnabled) {
}

void AHbkEm0650_Vulture::ResetPriorityAttackCount() {
}

bool AHbkEm0650_Vulture::GetEnabledSt10Event() const {
    return false;
}

void AHbkEm0650_Vulture::ForceDieForSt10Event() {
}

bool AHbkEm0650_Vulture::CheckPriorityAttackState() {
    return false;
}

void AHbkEm0650_Vulture::CallSt10Event() {
}


