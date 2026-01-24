#include "HbkStaticMeshActor.h"
#include "HbkStaticMeshComponent.h"

AHbkStaticMeshActor::AHbkStaticMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHbkStaticMeshComponent>(TEXT("StaticMeshComponent0"))) {
    const FProperty* p_StaticMeshComponent = GetClass()->FindPropertyByName("StaticMeshComponent");
    (*p_StaticMeshComponent->ContainerPtrToValuePtr<UStaticMeshComponent*>(this)) = (UStaticMeshComponent*)RootComponent;
}


