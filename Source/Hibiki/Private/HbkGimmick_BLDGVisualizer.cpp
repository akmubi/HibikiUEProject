#include "HbkGimmick_BLDGVisualizer.h"
#include "HbkSpectrumInfoComponent.h"

AHbkGimmick_BLDGVisualizer::AHbkGimmick_BLDGVisualizer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->SpectrumInfoComp = CreateDefaultSubobject<UHbkSpectrumInfoComponent>(TEXT("SpectrumInfoComp"));
}


