#include "HbkSearchableItemComponent.h"

UHbkSearchableItemComponent::UHbkSearchableItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAttachParentBound = true;
    this->bSearchEnable = true;
}

void UHbkSearchableItemComponent::SetSearchable(bool Enable) {
}

bool UHbkSearchableItemComponent::IsSearchable() const {
    return false;
}


