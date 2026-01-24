#include "HbkAttackHitShapeInfo.h"

FHbkAttackHitShapeInfo::FHbkAttackHitShapeInfo() {
    this->AttackTraceType = EHbkAttackTraceType::ATT_Sphere;
    this->AttackRadius = 0.00f;
    this->CapsuleHalfHeight = 0.00f;
    this->FanHalfAngle = 0.00f;
    this->FanHalfHeight = 0.00f;
    this->LineLength = 0.00f;
    this->TraceChannel = TraceTypeQuery1;
    this->bTraceComplex = false;
    this->bDirectionOwner = false;
    this->bDirectionPullIn = false;
    this->bIsIgnoreObject = false;
    this->bIsSnapToAttack = false;
    this->DrawDebugType = EDrawDebugTrace::None;
    this->DrawDebugThickness = 0.00f;
    this->BoxHalfSize = FVector(0.0f);
}

