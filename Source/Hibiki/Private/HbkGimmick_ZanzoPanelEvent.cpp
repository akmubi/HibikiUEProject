#include "HbkGimmick_ZanzoPanelEvent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "HbkPartnerTargetPointComponent.h"

AHbkGimmick_ZanzoPanelEvent::AHbkGimmick_ZanzoPanelEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->PartnerTargetPoint = CreateDefaultSubobject<UHbkPartnerTargetPointComponent>(TEXT("PartnerTargetPoint"));
    this->UsableTriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("FocusVolume"));
    this->CameraBlendInTime = 0.50f;
    this->CameraBlendOutTime = 0.25f;
    this->WipeType = EHbkTalkScreenTransition::Wipe_Diagonal_Vertical;
    this->WipeDuration = 0.50f;
    this->MemorialPhotoDuration = 5.00f;
    this->PartnerTargetPoint->SetupAttachment(RootComponent);
    this->UsableTriggerBox->SetupAttachment(RootComponent);
}

void AHbkGimmick_ZanzoPanelEvent::OnStartPartnerAction() {
}

void AHbkGimmick_ZanzoPanelEvent::OnPeppermintTalkEnd(const FHbkTalkContext TalkContext) {
}

void AHbkGimmick_ZanzoPanelEvent::OnMoveEnded() {
}

void AHbkGimmick_ZanzoPanelEvent::OnEndOverlapUsableTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AHbkGimmick_ZanzoPanelEvent::OnBeginOverlapUsableTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


