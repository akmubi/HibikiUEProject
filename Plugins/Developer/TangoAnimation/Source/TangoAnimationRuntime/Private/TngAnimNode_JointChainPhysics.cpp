#include "TngAnimNode_JointChainPhysics.h"

FTngAnimNode_JointChainPhysics::FTngAnimNode_JointChainPhysics() {
    this->bFixEndJoint = false;
    this->DummyBoneLength = 0.00f;
    this->SimulationSpace = ETngJCPSimulationSpace::ComponentSpace;
    this->DampingCurve = NULL;
    this->WorldDampingLocationCurve = NULL;
    this->WorldDampingRotationCurve = NULL;
    this->StiffnessCurve = NULL;
    this->BaseFrameRate = 0;
    this->NumIteration = 0;
    this->JointSphereRadius = 0.00f;
    this->JointSphereRadiusCurve = NULL;
    this->ConeConstraintAngle = 0;
    this->ConeConstraintAngleCurve = NULL;
    this->PlaneConstraintAxis = ETngJCPAxis::None;
    this->TeleportDistanceThreshold = 0;
    this->TeleportRotationThreshold = 0;
    this->WindScale = 0.00f;
    this->bOverrideWind = false;
    this->Gravity = FVector(0.0f);
    this->OverrideWindVelocity = FVector(0.0f);
}

