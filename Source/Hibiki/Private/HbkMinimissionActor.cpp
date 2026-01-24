#include "HbkMinimissionActor.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "HbkDamageComponent.h"
#include "HbkInteractTargetComponent.h"

AHbkMinimissionActor::AHbkMinimissionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->TalkData = NULL;
    this->InteractTargetComponent = CreateDefaultSubobject<UHbkInteractTargetComponent>(TEXT("InteractTarget0"));
    this->CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent0"));
    this->DamageComponent = CreateDefaultSubobject<UHbkDamageComponent>(TEXT("DamageComponent0"));
    this->InteractTargetComponent->SetupAttachment(RootComponent);
    this->CapsuleComponent->SetupAttachment(RootComponent);
}

void AHbkMinimissionActor::ReceiveMissionSuccessTalkEnd(const FHbkTalkContext TalkContext) {
}

void AHbkMinimissionActor::ReceiveMissionStartTalkEnd(const FHbkTalkContext TalkContext) {
}

void AHbkMinimissionActor::ReceiveMissionReportCompletedTalkEnd(const FHbkTalkContext TalkContext) {
}

void AHbkMinimissionActor::ReceiveMissionProgressTalkEnd(const FHbkTalkContext TalkContext) {
}

void AHbkMinimissionActor::ReceiveDamageTalkEnd(const FHbkTalkContext TalkContext) {
}

void AHbkMinimissionActor::ReceiveDamageSuccessTalkEnd(const FHbkTalkContext TalkContext) {
}

void AHbkMinimissionActor::OnInteraction(AActor* Interactor) {
}

void AHbkMinimissionActor::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

void AHbkMinimissionActor::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkMinimissionActor::MissionCompleteTalk() {
}


