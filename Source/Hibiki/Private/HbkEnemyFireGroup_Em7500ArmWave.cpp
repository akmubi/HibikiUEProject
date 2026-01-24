#include "HbkEnemyFireGroup_Em7500ArmWave.h"

AHbkEnemyFireGroup_Em7500ArmWave::AHbkEnemyFireGroup_Em7500ArmWave(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseMultiAttackComp = true;
    this->bUseMultiFire = true;
    this->SingleFireClass = NULL;
    this->SpawnEmbersFire = NULL;
    this->SpawnEmbersDelayCount = 0;
    this->bGeneratedActive = false;
    this->DestroyedLifeTime = 0.00f;
    this->bCheckHit = false;
    this->IncreasedCurve = NULL;
    this->FireAngleMax = 30.00f;
    this->bSpawnGround = false;
    this->SpawnLocationBoneName = TEXT("Gun");
    this->FireDistanceMax = 3000.00f;
    this->SpawnMoveDistance = 100.00f;
    this->InitFireScale = 0.50f;
    this->FireScaleMax = 1.00f;
    this->MoveNoteType = EHbkNote::Note_Quarter;
    this->MoveNoteCount = 1;
    this->ActiveWaitCount = 0;
    this->ActiveWaitType = EHbkNote::Note_Quarter;
    this->bAutoActive = false;
    this->bTypeBeam = false;
    this->bShowShootLine = false;
    this->ShootLine = NULL;
    this->SE_StartBurner = NULL;
    this->SE_EndBurner = NULL;
    this->SE_RotBurner = NULL;
    this->RotateFrameTime = 0.05f;
    this->StraightFrameTime = 0.10f;
    this->FireMoveSpeed = 1800.00f;
    this->SpawnDistEveryFrame = 100.00f;
}


