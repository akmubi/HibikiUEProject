#include "HbkSkeletalMeshActor.h"
#include "HbkSkeletalMeshComponent.h"

AHbkSkeletalMeshActor::AHbkSkeletalMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHbkSkeletalMeshComponent>(TEXT("SkeletalMeshComponent0"))) {
    const FProperty* p_SkeletalMeshComponent = GetClass()->FindPropertyByName("SkeletalMeshComponent");
    (*p_SkeletalMeshComponent->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this)) = (USkeletalMeshComponent*)RootComponent;
}


