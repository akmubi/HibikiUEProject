#include "HbkGimmick_BPMRushSpectrum.h"
#include "HbkSpectrumInfoComponent.h"

AHbkGimmick_BPMRushSpectrum::AHbkGimmick_BPMRushSpectrum(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->SpectrumInfoComp = CreateDefaultSubobject<UHbkSpectrumInfoComponent>(TEXT("SpectrumInfoComp"));
}


