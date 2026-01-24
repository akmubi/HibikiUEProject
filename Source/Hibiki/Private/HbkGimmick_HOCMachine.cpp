#include "HbkGimmick_HOCMachine.h"
#include "Components/SceneComponent.h"
#include "HbkInteractTargetComponent.h"

AHbkGimmick_HOCMachine::AHbkGimmick_HOCMachine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->Tags.AddDefaulted(1);
    this->bActivate = false;
    this->InteractTargetComponent = CreateDefaultSubobject<UHbkInteractTargetComponent>(TEXT("InteractTarget0"));
    this->InteractTargetComponent->SetupAttachment(RootComponent);
}

void AHbkGimmick_HOCMachine::OnInteraction(AActor* Interactor) {
}

void AHbkGimmick_HOCMachine::OnCloseStore() {
}

float AHbkGimmick_HOCMachine::GetAnimPlayRate() {
    return 0.0f;
}


