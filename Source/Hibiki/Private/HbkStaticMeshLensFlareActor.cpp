#include "HbkStaticMeshLensFlareActor.h"
#include "HbkGameAgentComponent.h"
#include "HbkStaticMeshLensFlareComponent.h"

AHbkStaticMeshLensFlareActor::AHbkStaticMeshLensFlareActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHbkStaticMeshLensFlareComponent>(TEXT("StaticMeshComponent0"))) {
    this->bCanBeInCluster = false;
    const FProperty* p_StaticMeshComponent = GetClass()->FindPropertyByName("StaticMeshComponent");
    (*p_StaticMeshComponent->ContainerPtrToValuePtr<UStaticMeshComponent*>(this)) = (UStaticMeshComponent*)RootComponent;
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
}


