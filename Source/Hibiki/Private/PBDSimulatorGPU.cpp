#include "PBDSimulatorGPU.h"
#include "NiagaraComponent.h"

APBDSimulatorGPU::APBDSimulatorGPU(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent0"));
    this->NiagaraComponent = (UNiagaraComponent*)RootComponent;
    this->bDestroyOnSystemFinish = false;
}

void APBDSimulatorGPU::SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish) {
}

void APBDSimulatorGPU::OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent) {
}


