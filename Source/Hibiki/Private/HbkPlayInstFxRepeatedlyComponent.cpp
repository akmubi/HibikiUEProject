#include "HbkPlayInstFxRepeatedlyComponent.h"

UHbkPlayInstFxRepeatedlyComponent::UHbkPlayInstFxRepeatedlyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEnableDebugRecorder = false;
}

bool UHbkPlayInstFxRepeatedlyComponent::SimplePlayInstFxFromKey(FName KeyName) {
    return false;
}

bool UHbkPlayInstFxRepeatedlyComponent::SimplePlayInstFxFromIndex(int32 ListIndex) {
    return false;
}

int32 UHbkPlayInstFxRepeatedlyComponent::RegisterInfoFromKey(FName KeyName, EHbkNote DelaySyncRhythm, int32 DelayNoteCount) {
    return 0;
}

int32 UHbkPlayInstFxRepeatedlyComponent::RegisterInfoFromIndex(int32 ListIndex, EHbkNote DelaySyncRhythm, int32 DelayNoteCount) {
    return 0;
}

void UHbkPlayInstFxRepeatedlyComponent::MontageBlendingOutEvent(UAnimMontage* Montage, bool bInterrupted) {
}


