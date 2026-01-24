#include "HbkAnimNotifyState_em0570_ArmBeam.h"

UHbkAnimNotifyState_em0570_ArmBeam::UHbkAnimNotifyState_em0570_ArmBeam() {
    this->PSTemplate = NULL;
    this->PSTemplateHit = NULL;
    this->bDestroyAtEnd = false;
    this->TraceChannel = TraceTypeQuery2;
    this->bIsClockwise = false;
    this->AttackRadius = 2000.00f;
    this->AttackHalfAngle = 45.00f;
    this->UpdateTargetTimeMax = 0.10f;
    this->UpdateHitInterval = 0.03f;
    this->UpdateHitIntervalCorrection = 0.01f;
    this->EasingFunc = EEasingFunc::Linear;
    this->EasingBlendExp = 2.00f;
    this->EasingSteps = 2;
    this->bIsDistanceToTarget = false;
    this->DistanceToTargetMin = 500.00f;
    this->DistanceToTargetOffset = 200.00f;
    this->ShotAkAudioEvent = NULL;
    this->EndAkAudioEvent = NULL;
    this->UpdateTargetTime = 0.00f;
    this->UpdateHitTime = 0.00f;
}


