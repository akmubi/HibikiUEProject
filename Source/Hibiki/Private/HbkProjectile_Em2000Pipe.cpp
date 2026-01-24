#include "HbkProjectile_Em2000Pipe.h"

AHbkProjectile_Em2000Pipe::AHbkProjectile_Em2000Pipe(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ThrowType = EHbkEm2000PipeThrow::Straight;
    this->bIsCharged = false;
    this->ChargedDamageType = NULL;
    this->ChargedParticle = NULL;
    this->ChargedParticleComponent = NULL;
    this->ShootLineParticle = NULL;
    this->ShootLineParticleComponent = NULL;
    this->MoveSignParticle = NULL;
    this->TraceType = TraceTypeQuery1;
    this->TraceTypeForScroll = TraceTypeQuery1;
    this->bIsRight = true;
    this->NoteCount = 10.00f;
    this->StraightSpeed = 2000.00f;
    this->ChangeingSpeed = 0.00f;
    this->TraceRadiusS = 30.00f;
    this->TraceRadiusL = 200.00f;
    this->LoopAnim = NULL;
    this->HomingSpeed = 20000.00f;
    this->BendNoteCount = 2.00f;
    this->BendMoveTimeMax = 0.00f;
    this->bIsRotThrow = false;
    this->InterpSpeed = 3.00f;
    this->BendValue = 80.00f;
    this->InterpSpeedCurve = NULL;
    this->BendCurve = NULL;
    this->HomingPossibleAngleMin = 30.00f;
    this->HomingPossibleAngleMax = 60.00f;
    this->IsUseBezier = true;
    this->BezierDist = 750.00f;
    this->FollowThroughSpeed = 0.00f;
    this->FollowThroughSpeedRate = 2.00f;
    this->BBStandPointNo = -1;
    this->SE_OnMoveLeft = NULL;
    this->SE_OnMoveCenter = NULL;
    this->SE_OnMoveRight = NULL;
    this->SE_OnChangingStayAir = NULL;
    this->SE_OnChangingAim = NULL;
    this->SE_OnChangingSign = NULL;
    this->SE_OnChangingMove = NULL;
    this->SE_OnStraightMove = NULL;
    this->SE_OnBreak = NULL;
    this->LoopPlayingID = 0;
}



void AHbkProjectile_Em2000Pipe::SynchronizeAnimation(USkeletalMeshComponent* SkeltalMeshComponent, AHbkWeapon* Weapon) {
}



