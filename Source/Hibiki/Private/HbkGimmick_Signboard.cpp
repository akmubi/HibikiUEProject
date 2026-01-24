#include "HbkGimmick_Signboard.h"
#include "Components/SceneComponent.h"
#include "HbkInteractTargetComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkGimmick_Signboard::AHbkGimmick_Signboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->Tags.AddDefaulted(1);
    this->TipsData = NULL;
    this->SkeletalMeshComponent = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("SkeletalMeshComponent0"));
    this->InteractTargetComponent = CreateDefaultSubobject<UHbkInteractTargetComponent>(TEXT("InteractTarget0"));
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
    this->InteractTargetComponent->SetupAttachment(RootComponent);
}

void AHbkGimmick_Signboard::Invoke_OnNewLineTips(const FName TalkCue) {
}

void AHbkGimmick_Signboard::Invoke_OnEndTips() {
}

void AHbkGimmick_Signboard::Invoke_OnBeginTips() {
}

FHbkTipsDataRow AHbkGimmick_Signboard::GetTipsDataRow() {
    return FHbkTipsDataRow{};
}



