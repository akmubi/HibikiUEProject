#include "DiskSimulatorGPU.h"
#include "NiagaraComponent.h"

ADiskSimulatorGPU::ADiskSimulatorGPU(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent0"));
    this->NiagaraComponent = (UNiagaraComponent*)RootComponent;
    this->bDestroyOnSystemFinish = false;
}

void ADiskSimulatorGPU::SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish) {
}

void ADiskSimulatorGPU::OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent) {
}


