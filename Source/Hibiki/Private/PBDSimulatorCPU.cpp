#include "PBDSimulatorCPU.h"
#include "NiagaraComponent.h"

APBDSimulatorCPU::APBDSimulatorCPU(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent0"));
    this->NiagaraComponent = (UNiagaraComponent*)RootComponent;
    this->bDestroyOnSystemFinish = false;
    this->InitialDistribution = EPBDInitialDistribution::SphereRandom;
    this->Shape = EPBDRigidBodyShape::Sphere;
    this->bDebugDrawShapeSpheres = false;
    this->ShapeEdgeLength = 5.00f;
    this->MeshScale = 6.00f;
    this->Opacity = 1.00f;
    this->NumThreads = 4;
    this->bUseNeighborGrid3D = true;
    this->bUseCollisionCandidate = false;
    this->NumShapes = 100;
    this->NumSubStep = 1;
    this->NumIteration = 4;
    this->FrameRate = 60.00f;
    this->CollisionCandidateRadiusScale = 2.00f;
    this->SphereDistanceProjectionAlpha = 0.80f;
    this->CollisionProjectionAlpha = 0.80f;
    this->WallProjectionAlpha = 0.80f;
    this->Gravity = -981.00f;
    this->SphereRestitution = 0.00f;
    this->SphereStaticFriction = 0.00f;
    this->SphereDynamicFriction = 0.00f;
    this->CollisionRestitution = 0.00f;
    this->CollisionRestitutionRandomMinScale = 0.50f;
    this->CollisionRestitutionRandomConeDegree = 30.00f;
    this->CollisionStaticFriction = 0.00f;
    this->CollisionDynamicFriction = 0.00f;
    this->WallRestitution = 0.00f;
    this->WallStaticFriction = 0.00f;
    this->WallDynamicFriction = 0.00f;
    this->InitPosRadius = 40.00f;
    this->VelocityMax = 1000.00f;
    this->bDirectSetNeighborGrid = false;
    this->MaxNeighborsPerCell = 8;
    this->SphereRadius = 1.00f;
    this->bAutoSpring = false;
    this->SpringFrameInterval = 10;
    this->NumSpringPlace = 1;
    this->SleepCountTime = 2.00f;
    this->SleepVelocity = 1.00f;
    this->AwakeDistance = 100.00f;
    this->bHideOnSleeping = false;
    this->FadeFrameInterval = 30;
}

void APBDSimulatorCPU::SpringOneShape(int32 SpringPlaceIdx) {
}

void APBDSimulatorCPU::SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish) {
}

void APBDSimulatorCPU::OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent) {
}


