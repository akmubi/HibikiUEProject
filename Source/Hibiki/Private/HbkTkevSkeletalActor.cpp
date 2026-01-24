#include "HbkTkevSkeletalActor.h"
#include "HbkTKEVToonShadingComponent.h"

AHbkTkevSkeletalActor::AHbkTkevSkeletalActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    const FProperty* p_CineGraphicsComponent = GetClass()->FindPropertyByName("CineGraphicsComponent");
    (*p_CineGraphicsComponent->ContainerPtrToValuePtr<UHbkCineActorGraphicsComponent*>(this)) = NULL;
    const FProperty* p_CineToonShadingComponent = GetClass()->FindPropertyByName("CineToonShadingComponent");
    (*p_CineToonShadingComponent->ContainerPtrToValuePtr<UHbkCineToonShadingComponent*>(this)) = NULL;
    this->TKEVToonShadingComponent = CreateDefaultSubobject<UHbkTKEVToonShadingComponent>(TEXT("TKEVToonShadingComponent"));
}


