#include "HbkGimmick_Spectrum.h"

AHbkGimmick_Spectrum::AHbkGimmick_Spectrum(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->NumRepeatU = 1.00f;
    this->IsDefaultActorHiddenInGame = true;
    this->ActivateFlag = true;
    this->DeactivateFlag = true;
}

void AHbkGimmick_Spectrum::SetMeshCompToSpectrumMeshInfo(int32 Index, UStaticMeshComponent* MeshComp) {
}


