#include "HbkGimmick_SpectraInterlockComponent.h"

UHbkGimmick_SpectraInterlockComponent::UHbkGimmick_SpectraInterlockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Type = FHbkGimmick_SpectraInterlockType::ClearSpectraRoom;
}

void UHbkGimmick_SpectraInterlockComponent::OnUpdateSpectraRoomClearState() {
}

void UHbkGimmick_SpectraInterlockComponent::OnGimmickReady(AHbkGimmickBase* GimmickBase) {
}


