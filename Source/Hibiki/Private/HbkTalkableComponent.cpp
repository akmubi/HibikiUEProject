#include "HbkTalkableComponent.h"

UHbkTalkableComponent::UHbkTalkableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TalkData = NULL;
    this->TalkableInterval = 0.50f;
    this->bVisibleAtStart = true;
    this->bEnableGameFlag = false;
    this->bHiddenInTalk = true;
    this->bNoInteractWhenAllTalkEnd = true;
    this->bResumeInteractWhenActivate = false;
}

void UHbkTalkableComponent::ResumeInteract() {
}

void UHbkTalkableComponent::ReceiveTalkSessionEnd(const FHbkTalkContext TalkContext) {
}

void UHbkTalkableComponent::ReceiveActionEnd() {
}

void UHbkTalkableComponent::PauseInteract() {
}

void UHbkTalkableComponent::OnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void UHbkTalkableComponent::OnInteraction(AActor* Interactor) {
}

void UHbkTalkableComponent::OnDeactivateTalkable(AActor* Activator) {
}

void UHbkTalkableComponent::OnDeactivateExtIntTalkable(AActor* Activator, int32 Value) {
}

void UHbkTalkableComponent::OnActivateTalkable(AActor* Activator) {
}

void UHbkTalkableComponent::OnActivateExtIntTalkable(AActor* Activator, int32 Value) {
}

void UHbkTalkableComponent::Invoke_OnEndTalk(const FName TalkResultOption, FHbkTalkableInfo_t& TalkDataInfo) {
}

void UHbkTalkableComponent::Invoke_OnEndAction(FHbkTalkableInfo_t& TalkDataInfo) {
}

void UHbkTalkableComponent::Invoke_OnBeginTalk(FHbkTalkableTalkData_t& TalkDataInfo) {
}

void UHbkTalkableComponent::Invoke_OnBeginAction(FHbkTalkableTalkData_t& TalkDataInfo) {
}




void UHbkTalkableComponent::BeginTalk(UObject* Interactor, bool bUnPlayable, bool bInteractTalk, FHbkTalkableInfo_t& Info) {
}

void UHbkTalkableComponent::BeginInteractTalk(UObject* Interactor, bool bUnPlayable) {
}

void UHbkTalkableComponent::BeginDeactivateTalk(UObject* DeactivateCauser, bool bUnPlayable) {
}

void UHbkTalkableComponent::BeginDamageTalk(UObject* DamageCauser, bool bUnPlayable) {
}

void UHbkTalkableComponent::BeginActivateTalk(UObject* ActivateCauser, bool bUnPlayable) {
}


