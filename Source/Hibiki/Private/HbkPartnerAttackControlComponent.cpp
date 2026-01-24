#include "HbkPartnerAttackControlComponent.h"

UHbkPartnerAttackControlComponent::UHbkPartnerAttackControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionChannel = ECC_WorldStatic;
}

void UHbkPartnerAttackControlComponent::Receive_OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UHbkPartnerAttackControlComponent::Receive_OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


