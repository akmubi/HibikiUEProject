#include "HbkNp0700_MowingDog.h"

AHbkNp0700_MowingDog::AHbkNp0700_MowingDog(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MoveRange = NULL;
    this->PlayerInViewDist = 1000.00f;
    this->PlayerInViewDegree = 160.00f;
    this->CollisionChannel = ECC_MAX;
    this->SurfaceType = SurfaceType_Max;
    this->DefaultPhysicalMaterial = NULL;
    this->IdleAnim = NULL;
    this->RunAnim = NULL;
}


