#include "HbkPartnerTargetPointComponent.h"

UHbkPartnerTargetPointComponent::UHbkPartnerTargetPointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsBattleTarget = false;
    this->bIsPriorityPoint = true;
    this->bIsEnable = true;
    this->bShowIcon = true;
    this->PartnerPointType = EHbkPartnerType::None;
    this->bIsWaitingForOrder = false;
    this->VisibleDistance = 3000.00f;
    this->UsableDistance = 1000.00f;
    this->bEnableAnimCamera = true;
    this->KorsicaRhythmPat = EHbkKorsicaRhythmPattarnNum::None;
    this->IconWidget = NULL;
}

void UHbkPartnerTargetPointComponent::SetPartnerType(EHbkPartnerType Type) {
}

void UHbkPartnerTargetPointComponent::SetPartnerPointEnabled(bool Enable) {
}

void UHbkPartnerTargetPointComponent::OnUsableTriigerEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void UHbkPartnerTargetPointComponent::OnUsableTriigerBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

EHbkKorsicaRhythmPattarnNum UHbkPartnerTargetPointComponent::GetKorsicaRhythmPat() {
    return EHbkKorsicaRhythmPattarnNum::None;
}

void UHbkPartnerTargetPointComponent::DoesUse() {
}


