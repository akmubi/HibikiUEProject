#include "HbkGimmick_SpectrumPlatform.h"
#include "HbkSpectrumInfoComponent.h"

AHbkGimmick_SpectrumPlatform::AHbkGimmick_SpectrumPlatform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->SpectrumInfoComp = CreateDefaultSubobject<UHbkSpectrumInfoComponent>(TEXT("SpectrumInfoComp"));
}

void AHbkGimmick_SpectrumPlatform::OnStartLevelSequence(const FHbkPlayingLevelSeqInfo& Info) {
}

void AHbkGimmick_SpectrumPlatform::OnEndLevelSequence(const FHbkPlayingLevelSeqInfo& Info) {
}

void AHbkGimmick_SpectrumPlatform::OnActionImpact(int32 ActionType) {
}


