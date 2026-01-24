#include "HbkSpectraBattleController.h"

UHbkSpectraBattleController::UHbkSpectraBattleController() {
    this->SpectraBattleDataTable = NULL;
    this->SpawnDelayTime = 1.00f;
    this->SpectraBattleWidget = NULL;
}

void UHbkSpectraBattleController::Update(float DeltaTime) {
}

void UHbkSpectraBattleController::Termination() {
}

void UHbkSpectraBattleController::SupplyEnemyCompleted() {
}

void UHbkSpectraBattleController::StartBattleGroup(FName EnemyGroupName) {
}

void UHbkSpectraBattleController::SetPlayerResetTransform(FTransform ResetTransform) {
}

void UHbkSpectraBattleController::ReceivePlayerDied() {
}

void UHbkSpectraBattleController::ReceivePlayerDamage() {
}

void UHbkSpectraBattleController::ReceiveEnemyOverkill(AHbkEnemyCharacter* EnemyPawn, AHbkEnemyAIController* EnemyAI) {
}

void UHbkSpectraBattleController::ReceiveEnemyDamage(AHbkEnemyCharacter* EnemyPawn, float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void UHbkSpectraBattleController::ReceiveEndedScoreRecord(const FHbkBattleResultDetail& ResultDetail, const FHbkBattleResultScoreDetail& ScoreDetail, const FHbkBattleResultScoreDetail& JustTimingDetail, const FHbkBattleResultScoreDetail& TimeDetail) {
}

void UHbkSpectraBattleController::ReceiveBeginBattle() {
}

void UHbkSpectraBattleController::ReceiveAttackRepelled(AHbkEnemyCharacter* EnemyPawn, const AHbkCharacter* Blocker) {
}

void UHbkSpectraBattleController::OnEndAttackNotice(AHbkEnemyCharacter* Attacker, bool IsParrySuccessful, UAnimSequenceBase* PlayerAction) {
}

void UHbkSpectraBattleController::OnBeginAttackNotice() {
}

void UHbkSpectraBattleController::NotifyEnemyDied(AHbkEnemyCharacter* EnemyPawn, AHbkCharacter* CauserPawn) {
}

bool UHbkSpectraBattleController::IsBattleChallengePossible() {
    return false;
}

void UHbkSpectraBattleController::InitializeByName(FName FindName) {
}

void UHbkSpectraBattleController::Initialize(int32 StIndex) {
}

void UHbkSpectraBattleController::EndProcess(EHbkSpectraBattleEndReason BattleEndReason) {
}

void UHbkSpectraBattleController::DecideGiveup() {
}

void UHbkSpectraBattleController::DecideContinue() {
}

void UHbkSpectraBattleController::BattleResultEnded() {
}


