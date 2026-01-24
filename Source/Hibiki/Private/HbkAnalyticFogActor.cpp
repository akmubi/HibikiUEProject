#include "HbkAnalyticFogActor.h"
#include "HbkAnalyticFogComponent.h"
#include "HbkGameAgentComponent.h"

AHbkAnalyticFogActor::AHbkAnalyticFogActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHbkAnalyticFogComponent>(TEXT("StaticMeshComponent0"))) {
    this->bCanBeInCluster = false;
    const FProperty* p_StaticMeshComponent = GetClass()->FindPropertyByName("StaticMeshComponent");
    (*p_StaticMeshComponent->ContainerPtrToValuePtr<UStaticMeshComponent*>(this)) = (UStaticMeshComponent*)RootComponent;
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
    this->bSaveActivate = false;
}


