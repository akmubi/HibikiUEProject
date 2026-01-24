#include "HbkGimmick_FollowLaser.h"

AHbkGimmick_FollowLaser::AHbkGimmick_FollowLaser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->moveType = EHbkGimmick_FollowLaserMoveType::Follow;
    this->ArrivalNote = 1;
    this->EVMoveNote = 1;
    this->FollowStartDist = 0.00f;
    this->FollowResetDist = 340.00f;
    this->FollowResetDistNote = 2;
    this->BothSidesLaserSpace = 1000.00f;
    this->EndBothSidesLaserSpace = 200.00f;
    this->LaserNum = 9;
    this->LaserInterval = 150.00f;
    this->MeshJoint = NULL;
    this->MeshJointAnim = NULL;
    this->MeshBeam = NULL;
    this->HumNoisePlaySeRef = NULL;
    this->HumNoiseStopSeRef = NULL;
    this->LaserBeamVfxRef = NULL;
    this->LaserBeamEndVfxRef = NULL;
    this->PlayerHitVfxRef = NULL;
    this->FloorLightVfxRef = NULL;
    this->SplineComp = NULL;
    this->MoveMesh = NULL;
    this->FrontMoveMesh = NULL;
    this->UseAttackComp = false;
    this->CollisionProfileName = TEXT("NoCollision");
    this->CollisionEnabled = ECollisionEnabled::NoCollision;
    this->CollisionObjectType = ECC_WorldStatic;
}

void AHbkGimmick_FollowLaser::OnPostResetPlayerPosition(const FTransform& Transform, const FGameplayTagContainer& AgentTags) {
}

void AHbkGimmick_FollowLaser::OnCollisionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHbkGimmick_FollowLaser::BeginMove(int32 NoteCount, bool bOnBeat) {
}


