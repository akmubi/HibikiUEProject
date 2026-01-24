#include "HbkGimmick_MagnetRailObstacleLaser.h"

AHbkGimmick_MagnetRailObstacleLaser::AHbkGimmick_MagnetRailObstacleLaser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FirstTimeSignNote = 17;
    this->SecondTimeSignNote = 13;
    this->ThirdTimeSignNote = 9;
    this->VisibleLaserNote = 5;
    this->VisibleLaserSeRef = NULL;
    this->LaserVfxRef = NULL;
    this->LaserDamageVfxRef = NULL;
    this->FirstTimeSignVfxRef = NULL;
    this->SecondTimeSignVfxRef = NULL;
    this->ThirdTimeSignVfxRef = NULL;
}


