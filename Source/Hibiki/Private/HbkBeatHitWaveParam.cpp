#include "HbkBeatHitWaveParam.h"

FHbkBeatHitWaveParam::FHbkBeatHitWaveParam() {
    this->bContinuousHit = false;
    this->DefaultDamageType = NULL;
    this->Note16thNum = 0;
    this->Duration = 0.00f;
    this->moveSpeed = 0.00f;
    this->BeatHitTimeBeatNum = 0;
    this->bEffectAdjustGround = false;
    this->bEffectAttachOwnerModel = false;
    this->Effect = NULL;
    this->Sound = NULL;
    this->InstFXSound = NULL;
    this->ShapeRotation = FRotator(0.0f);
    this->Offset = FVector(0.0f);
    this->RotationOffset = FRotator(0.0f);
    this->MoveRotation = FRotator(0.0f);
    this->EffectLocationOffset = FVector(0.0f);
    this->EffectRotationOffset = FRotator(0.0f);
}

