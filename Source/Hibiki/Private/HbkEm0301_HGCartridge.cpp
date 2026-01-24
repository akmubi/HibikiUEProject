#include "HbkEm0301_HGCartridge.h"
#include "HbkSkeletalMeshComponent.h"

AHbkEm0301_HGCartridge::AHbkEm0301_HGCartridge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("Mesh"));
    this->SceneComp = NULL;
    this->Mesh = (UHbkSkeletalMeshComponent*)RootComponent;
    this->ImpulseBoneName = TEXT("Origin");
}

void AHbkEm0301_HGCartridge::StartImpulse() {
}

void AHbkEm0301_HGCartridge::SetParentLocation(const FVector Location) {
}

void AHbkEm0301_HGCartridge::SetAddImpulseValue(const float Value) {
}

UHbkSkeletalMeshComponent* AHbkEm0301_HGCartridge::GetMesh() const {
    return NULL;
}


