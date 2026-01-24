#include "HbkAIController.h"

AHbkAIController::AHbkAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BehaviorTree = NULL;
    this->DamageStateTime = 0.50f;
    this->bInitAIStop = false;
}

void AHbkAIController::UpdateExAttackState(float DeltaSeconds, TEnumAsByte<HbkAIUpdate::Type>& ResultExec) {
}

void AHbkAIController::UpdateDamageState(float DeltaSeconds, TEnumAsByte<HbkAIUpdate::Type>& ResultExec) {
}

void AHbkAIController::UpdateAttackState(float DeltaSeconds, TEnumAsByte<HbkAIUpdate::Type>& ResultExec) {
}

void AHbkAIController::UpdateActionState(float DeltaSeconds, TEnumAsByte<HbkAIUpdate::Type>& ResultExec) {
}

void AHbkAIController::StopAI() {
}

void AHbkAIController::SetDamageStateEnable(bool IsEnable) {
}

void AHbkAIController::RestartAI() {
}

void AHbkAIController::Receive_PostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkAIController::Receive_OnBrokenParts(FName PartName) {
}

void AHbkAIController::Receive_OnAttackRepelledNoReaction(const AActor* Blocker, const FHbkBlockDamageParam& BlockParam) {
}

void AHbkAIController::Receive_OnAttackRepelled(const AActor* Blocker, const FHbkBlockDamageParam& BlockParam) {
}

void AHbkAIController::OnNextBeatForAction(int32 BeatCount) {
}

bool AHbkAIController::IsOutsideCamera(AActor* TargetActor) const {
    return false;
}

bool AHbkAIController::IsEnableAILogic() const {
    return false;
}

bool AHbkAIController::IsDuringQTE() const {
    return false;
}

bool AHbkAIController::IsDamageState() const {
    return false;
}

bool AHbkAIController::IsAILogicSleep() const {
    return false;
}

AActor* AHbkAIController::GetTargetActor() const {
    return NULL;
}

AHbkCharacter* AHbkAIController::GetHbkCharacter() const {
    return NULL;
}

void AHbkAIController::FinishQTE(bool Success) {
}

bool AHbkAIController::ChangeStateToExAttack(FGameplayTag ExAttackTag) {
    return false;
}

bool AHbkAIController::ChangeStateToDamage(FGameplayTagContainer DamageTags, const UTngDamageType* DamageType) {
    return false;
}

bool AHbkAIController::ChangeStateToAttackWithTag(FGameplayTag AttackNameTag) {
    return false;
}

bool AHbkAIController::ChangeStateToAttack(EHbkAttackRangeType RangeType) {
    return false;
}

bool AHbkAIController::ChangeStateToAction(FGameplayTagContainer EnemyActionTags) {
    return false;
}

bool AHbkAIController::CanTransitDamageState_Implementation(const FGameplayTagContainer& DamageTags) {
    return false;
}













void AHbkAIController::BeginQTE() {
}

void AHbkAIController::AbortExAttackState() {
}

void AHbkAIController::AbortAttackState() {
}


