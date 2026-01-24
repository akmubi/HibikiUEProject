#include "DiskSimulatorCPU.h"
#include "NiagaraComponent.h"

ADiskSimulatorCPU::ADiskSimulatorCPU(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent0"));
    this->NiagaraComponent = (UNiagaraComponent*)RootComponent;
    this->bDestroyOnSystemFinish = false;
    this->InitialDistribution = EDiskInitialDistribution::PlaneUniform;
    this->MeshScale = 6.00f;
    this->Opacity = 1.00f;
    this->DiskRadius = 1.00f;
    this->Gravity = -981.00f;
    this->InertiaMomentScale = 1.00f;
    this->NumThreads = 4;
    this->NumDisks = 100;
    this->NumSubStep = 1;
    this->NumIteration = 4;
    this->FrameRate = 60.00f;
    this->CollisionProjectionAlpha = 0.80f;
    this->CollisionRotProjectionAlpha = 0.50f;
    this->WallProjectionAlpha = 0.80f;
    this->WallRotProjectionAlpha = 0.50f;
    this->CollisionRestitution = 0.00f;
    this->CollisionDynamicFriction = 0.00f;
    this->WallRestitution = 0.00f;
    this->WallDynamicFriction = 0.00f;
    this->bAutoSpring = false;
    this->SpringFrameInterval = 10;
    this->NumSpringPlace = 1;
    this->SleepCountTime = 2.00f;
    this->SleepVelocity = 1.00f;
    this->AwakeDistance = 100.00f;
    this->bHideOnSleeping = false;
    this->FadeFrameInterval = 30;
}

void ADiskSimulatorCPU::SpringOneDisk(int32 SpringPlaceIdx) {
}

void ADiskSimulatorCPU::SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish) {
}

void ADiskSimulatorCPU::OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent) {
}


