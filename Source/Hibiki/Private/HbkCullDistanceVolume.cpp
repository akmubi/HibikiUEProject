#include "HbkCullDistanceVolume.h"

AHbkCullDistanceVolume::AHbkCullDistanceVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CullDistances.AddDefaulted(2);
}

#if WITH_EDITOR
void AHbkCullDistanceVolume::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) {
}

void AHbkCullDistanceVolume::PostEditMove(bool bFinished) {
}

void AHbkCullDistanceVolume::Destroyed() {
}
#endif
