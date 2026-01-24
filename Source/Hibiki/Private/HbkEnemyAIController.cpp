#include "HbkEnemyAIController.h"
#include "HbkGroupMemberComponent.h"
#include "HbkPathFollowingComponent.h"

AHbkEnemyAIController::AHbkEnemyAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHbkPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->GroupMember = CreateDefaultSubobject<UHbkGroupMemberComponent>(TEXT("GroupMember"));
    this->bIsPlayAppearAnim = false;
    this->AppearAnimIndex = 0;
    this->bTurnDamageDirection = true;
    this->AttackCoolTime = 1.00f;
    this->ActionIntervalTime = 0.20f;
    this->bUseOldDamageSelect = false;
    this->bUseStateFlowVer3 = false;
    this->IntentionState = EEnemyIntentionState::EIS_Combat;
    this->bIsRequestMoveTo = false;
    this->MoveIdleRatio = 100.00f;
    this->PathScore = 0.00f;
    this->bIsBattleState = false;
}

bool AHbkEnemyAIController::TargetIsAttacking(AActor* TargetActor) const {
    return false;
}

void AHbkEnemyAIController::SetPlayAppearAnim(bool IsPlay, int32 Index) {
}

void AHbkEnemyAIController::SetPathLocationList(TArray<FVector> LocationList) {
}

void AHbkEnemyAIController::SetMovePathScore(float NewPathScore) {
}

void AHbkEnemyAIController::SetIntentionState(EEnemyIntentionState NewState) {
}

void AHbkEnemyAIController::SetBattleStateEnable(bool Enable) {
}

FGameplayTag AHbkEnemyAIController::SelectAttackTagName(const TArray<FHbkEnemyAttackSelectInfo>& SelectList) const {
    return FGameplayTag{};
}

void AHbkEnemyAIController::RequestMoveTo_Implementation(FVector TargetLocation, bool QuickMove) {
}

void AHbkEnemyAIController::Receive_OnEndDamageState_Implementation(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI) {
}

void AHbkEnemyAIController::Receive_OnEndAttackState_Implementation(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI) {
}

void AHbkEnemyAIController::Receive_OnEndActionState_Implementation(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI) {
}

void AHbkEnemyAIController::Receive_OnBeginDamageState_Implementation(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI) {
}

void AHbkEnemyAIController::Receive_OnBeginAttackState_Implementation(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI) {
}

void AHbkEnemyAIController::Receive_OnBeginActionState_Implementation(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI) {
}

void AHbkEnemyAIController::Receive_OnAbortDamageState_Implementation(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI) {
}

void AHbkEnemyAIController::Receive_OnAbortAttackState_Implementation(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI) {
}

void AHbkEnemyAIController::Receive_OnAbortActionState_Implementation(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI) {
}

bool AHbkEnemyAIController::OrderAttackCancel() {
    return false;
}

bool AHbkEnemyAIController::OrderAttack() {
    return false;
}

void AHbkEnemyAIController::OnNextBeatForAttack(int32 BeatCount) {
}

bool AHbkEnemyAIController::IsRequestMoveTo() {
    return false;
}

bool AHbkEnemyAIController::IsPlayAppearAnim() const {
    return false;
}

bool AHbkEnemyAIController::IsOrderedAttack() const {
    return false;
}

bool AHbkEnemyAIController::IsBattleState() const {
    return false;
}

bool AHbkEnemyAIController::IsAttackState() const {
    return false;
}

bool AHbkEnemyAIController::IsActionState() const {
    return false;
}

TArray<FVector> AHbkEnemyAIController::GetPathLocationList() {
    return TArray<FVector>();
}

bool AHbkEnemyAIController::GetOutsideStepMoveDirection(AActor* TargetActor) const {
    return false;
}

float AHbkEnemyAIController::GetOffensiveValue() {
    return 0.0f;
}

AHbkMoveTargetActor* AHbkEnemyAIController::GetMoveTargetActor() const {
    return NULL;
}

float AHbkEnemyAIController::GetMovePathScore() {
    return 0.0f;
}

float AHbkEnemyAIController::GetMoveIdleRatio() {
    return 0.0f;
}

EEnemyIntentionState AHbkEnemyAIController::GetIntentionState() {
    return EEnemyIntentionState::EIS_Idle;
}

AHbkEnemyCharacter* AHbkEnemyAIController::GetHbkEnemyCharacter() {
    return NULL;
}

UHbkGroupMemberComponent* AHbkEnemyAIController::GetGroupMemberComponent() const {
    return NULL;
}

bool AHbkEnemyAIController::GetAvoidDirection(AActor* TargetActor) const {
    return false;
}

UHbkEnemyAttackInfoComponent* AHbkEnemyAIController::GetAttackInfoComponent() {
    return NULL;
}

float AHbkEnemyAIController::GetAttackCoolTime() {
    return 0.0f;
}

UHbkActionParamComponent* AHbkEnemyAIController::GetActionParamComponent() {
    return NULL;
}

void AHbkEnemyAIController::DisableRequestMoveTo() {
}

FVector AHbkEnemyAIController::CalcBattlePosition(AActor* TargetActor) {
    return FVector{};
}






