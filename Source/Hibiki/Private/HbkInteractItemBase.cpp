#include "HbkInteractItemBase.h"
#include "Components/SceneComponent.h"
#include "HbkInteractTargetComponent.h"

AHbkInteractItemBase::AHbkInteractItemBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->SceneRootComp = (USceneComponent*)RootComponent;
    this->InteractTargetComp = CreateDefaultSubobject<UHbkInteractTargetComponent>(TEXT("InteractTargetComp"));
    this->bInitActiveInteract = true;
    this->InteractTargetComp->SetupAttachment(RootComponent);
}

void AHbkInteractItemBase::SetActiveInteract(const bool bActive) {
}

void AHbkInteractItemBase::OnInteraction(AActor* Interactor) {
}


