#include "HbkOverlapEventLinkComponent.h"

UHbkOverlapEventLinkComponent::UHbkOverlapEventLinkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->linkBeginOverlapFlag = true;
    this->linkEndOverlapFlag = false;
    this->linkOnActivateFlag = false;
    this->linkOnDeactivateFlag = true;
}

void UHbkOverlapEventLinkComponent::OnOverlapEventLinkEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void UHbkOverlapEventLinkComponent::OnOverlapEventLinkBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}


