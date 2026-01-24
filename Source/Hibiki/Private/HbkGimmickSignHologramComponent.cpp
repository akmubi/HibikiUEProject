#include "HbkGimmickSignHologramComponent.h"

UHbkGimmickSignHologramComponent::UHbkGimmickSignHologramComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ArrowDefaultType = EHbkGimmickSignHologramArrowType::SIGN_ARROW_DOWN;
}

void UHbkGimmickSignHologramComponent::SetSignHiddenInGame(bool Flag) {
}

void UHbkGimmickSignHologramComponent::On8thNoteAnimationEvent_SecDFlyingBase(int32 NoteCount, bool bDownBeat) {
}


