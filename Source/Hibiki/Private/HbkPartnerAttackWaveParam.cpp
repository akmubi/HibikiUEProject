#include "HbkPartnerAttackWaveParam.h"

FHbkPartnerAttackWaveParam::FHbkPartnerAttackWaveParam() {
    this->bSphereVolumeOnly = false;
    this->SphereRadius = 0.00f;
    this->DamageType = NULL;
    this->Duration = 0.00f;
    this->MoveDistance = 0.00f;
    this->bWindMode = false;
    this->ForwardMoveTime = 0.00f;
    this->MoveAccelTime = 0.00f;
    this->moveSpeed = 0.00f;
    this->MoveMaxSpeed = 0.00f;
    this->TurnSpeed = 0.00f;
    this->NearPlayerDistance = 0.00f;
    this->bEffectAdjustGround = false;
    this->bEffectAttachOwnerModel = false;
    this->Effect = NULL;
    this->Sound = NULL;
    this->EndSound = NULL;
    this->ShapeRotation = FRotator(0.0f);
    this->Offset = FVector(0.0f);
    this->RotationOffset = FRotator(0.0f);
    this->EffectLocationOffset = FVector(0.0f);
    this->EffectRotationOffset = FRotator(0.0f);
}

