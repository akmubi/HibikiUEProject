#include "HbkGimmick_RDDroneLaser.h"

AHbkGimmick_RDDroneLaser::AHbkGimmick_RDDroneLaser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Drone = NULL;
    this->AttackComp = NULL;
    this->AttachedSkeletalMeshComp = NULL;
}


