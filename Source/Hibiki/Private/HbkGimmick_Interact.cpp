#include "HbkGimmick_Interact.h"
#include "Components/SceneComponent.h"
#include "HbkInteractTargetComponent.h"

AHbkGimmick_Interact::AHbkGimmick_Interact(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->Tags.AddDefaulted(1);
    this->bIsAutoDeactivate = false;
    this->bCanInteractOnce = false;
    this->WaitTimeUntilReusable = 0.00f;
    this->InteractEventType = EHbkInteractEventType::Custom;
    this->bIsInteracted = false;
    this->InteractTargetComponent = CreateDefaultSubobject<UHbkInteractTargetComponent>(TEXT("InteractTarget0"));
    this->GimmickActivateTask = NULL;
    this->GimmickDeactivateTask = NULL;
    this->InteractTargetComponent->SetupAttachment(RootComponent);
}



void AHbkGimmick_Interact::SetPauseInteract(bool Pause) {
}

void AHbkGimmick_Interact::OnSuccessGimmickDeactivate() {
}

void AHbkGimmick_Interact::OnSuccessGimmickActivate() {
}

bool AHbkGimmick_Interact::IsInteracted() const {
    return false;
}


