#include "HbkProjectile_Em7500ArmBeam.h"

AHbkProjectile_Em7500ArmBeam::AHbkProjectile_Em7500ArmBeam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerKale = NULL;
    this->OwnerArm = NULL;
    this->NoticeParticleComp = NULL;
    this->AttackAngle = 0.00f;
    this->AttackNoticeParticle = NULL;
    this->AttackNoticeSound = NULL;
}


