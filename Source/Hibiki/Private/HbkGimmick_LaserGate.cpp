#include "HbkGimmick_LaserGate.h"

AHbkGimmick_LaserGate::AHbkGimmick_LaserGate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->CloseGateNote = 32;
    this->FirstSignNote = 8;
    this->SecondSignNote = 4;
    this->ThirdSignNote = 4;
    this->LaserNum = 9;
    this->LaserInterval = 150.00f;
    this->MeshJoint = NULL;
    this->MeshJointAnim = NULL;
    this->VisibleLaserSeRef = NULL;
    this->LaserBeamVfxRef = NULL;
    this->LaserBeamEndVfxRef = NULL;
    this->PlayerHitVfxRef = NULL;
    this->FirstTimeSignVfxRef = NULL;
    this->SecondTimeSignVfxRef = NULL;
    this->ThirdTimeSignVfxRef = NULL;
}


