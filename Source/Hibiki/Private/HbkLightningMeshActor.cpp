#include "HbkLightningMeshActor.h"
#include "HbkLightningMeshComponent.h"

AHbkLightningMeshActor::AHbkLightningMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHbkLightningMeshComponent>(TEXT("StaticMeshComponent0"))) {
    this->bCanBeInCluster = false;
    const FProperty* p_StaticMeshComponent = GetClass()->FindPropertyByName("StaticMeshComponent");
    (*p_StaticMeshComponent->ContainerPtrToValuePtr<UStaticMeshComponent*>(this)) = (UStaticMeshComponent*)RootComponent;
}


