#include "HbkBossCharacterBase.h"
#include "HbkBattleStateComponent.h"
#include "HbkBossAttackInfoComponent.h"
#include "HbkDamagePartsComponent.h"

AHbkBossCharacterBase::AHbkBossCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HbkBossAttackInfo = CreateDefaultSubobject<UHbkBossAttackInfoComponent>(TEXT("HbkBossAttackInfo"));
    this->HbkBattleState = CreateDefaultSubobject<UHbkBattleStateComponent>(TEXT("HbkBattleState"));
    this->HbkDamageParts = CreateDefaultSubobject<UHbkDamagePartsComponent>(TEXT("HbkDamageParts"));
    this->PrevLocationIndex = 0;
    this->TargetActorPrevLocation.AddDefaulted(3);
    this->bIsHitAttack = false;
    this->bEnableFirstDamageAnim = true;
    this->bIsMacaronGravity = false;
    this->SPStagingDT = NULL;
    this->bIsHitSpecialAttack = false;
    this->bIsAttachedSpecialAttack = false;
    this->bIsSuppressAction = false;
    this->bIsExcludeJamComboStateOfSuppressAction = false;
    this->GravityTakeDamageRate = 1.50f;
}

void AHbkBossCharacterBase::WakeUpBoss() {
}

void AHbkBossCharacterBase::ResetTargetActorPrevLocation() {
}

void AHbkBossCharacterBase::ResetHitAttack() {
}

void AHbkBossCharacterBase::ReservePhase(int32 Phase) {
}

bool AHbkBossCharacterBase::ReflectChangePhase() {
    return false;
}


void AHbkBossCharacterBase::PlayBossHintTalk(FHbkBossHintTalkContent& Content) {
}

void AHbkBossCharacterBase::PlayBossActionVoice(FHbkBossActionVoiceContent& Content, bool IsForceStopPrevious) {
}

void AHbkBossCharacterBase::PerformDownDamage(FGameplayTagContainer DamageTags) {
}

void AHbkBossCharacterBase::PerformAttackBossFromAnimation(UAnimSequenceBase* InAnimation, const FHbkEnemyAttackParam InAttackParam) {
}

void AHbkBossCharacterBase::PerformAttackBoss(const FGameplayTag InAttackTag, const FHbkEnemyAttackParam InAttackParam) {
}

void AHbkBossCharacterBase::PerformActionBossFromAnimation(UAnimSequenceBase* InAnimation, const FHbkActionParam& InActionParam) {
}

void AHbkBossCharacterBase::PerformActionBoss(const FGameplayTag InAttackTag, const FHbkActionParam& InActionParam) {
}

void AHbkBossCharacterBase::OnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkBossCharacterBase::OnChangeStateReserve(int32 StateIndex) {
}

void AHbkBossCharacterBase::OnBeatPerformAttackBoss(int32 NoteCount) {
}

void AHbkBossCharacterBase::OnBeatPerformActionBoss(int32 NoteCount) {
}

void AHbkBossCharacterBase::OnAbortAttackState(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI) {
}

void AHbkBossCharacterBase::OnAbortActionState(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI) {
}

bool AHbkBossCharacterBase::IsSuppressActionFlag() const {
    return false;
}

bool AHbkBossCharacterBase::IsHitAttack() const {
    return false;
}

FVector AHbkBossCharacterBase::GetTargetLocationLinePrediction(float Velocity, float DeltaTime) {
    return FVector{};
}

FVector AHbkBossCharacterBase::GetTargetLocationCirclePrediction(float Velocity, float DeltaTime) {
    return FVector{};
}

FVector AHbkBossCharacterBase::GetTargetActorPrevLocation(int32 Index) {
    return FVector{};
}

UHbkGameplayTask_BossQTE* AHbkBossCharacterBase::GetQTETask() const {
    return NULL;
}

FVector AHbkBossCharacterBase::GetLinePrediction(const FVector& Position, const FVector& PrePosition, float Velocity, float DeltaTime) {
    return FVector{};
}

float AHbkBossCharacterBase::GetHealthRate() const {
    return 0.0f;
}

UHbkDamagePartsComponent* AHbkBossCharacterBase::GetHbkDamageParts() const {
    return NULL;
}

UHbkBossAttackInfoComponent* AHbkBossCharacterBase::GetHbkBossAttackInfo() const {
    return NULL;
}

AHbkBossAIController* AHbkBossCharacterBase::GetHbkBossAI() const {
    return NULL;
}

UHbkBattleStateComponent* AHbkBossCharacterBase::GetHbkBattleState() const {
    return NULL;
}

int32 AHbkBossCharacterBase::GetCurrentPhase() const {
    return 0;
}

FVector AHbkBossCharacterBase::GetCircumferenceTargetPosition(float AngleYawDeff, float Distance, bool& HitWall) {
    return FVector{};
}

FVector AHbkBossCharacterBase::GetCirclePrediction(const FVector& Position, const FVector& PrePosition, const FVector& PrePosition2, float Velocity, float DeltaTime) {
    return FVector{};
}

FVector AHbkBossCharacterBase::GetAroundTargetPosition(float MinDistance, int32 Division) {
    return FVector{};
}

void AHbkBossCharacterBase::FinishDownDamage() {
}

void AHbkBossCharacterBase::ClearSelectedTag() {
}

void AHbkBossCharacterBase::ChangeHealthForDamage(float Value, float PrevValue, float ValueRate) {
}

void AHbkBossCharacterBase::CallOnPhaseStart() {
}

void AHbkBossCharacterBase::CallOnBattleStart() {
}

int32 AHbkBossCharacterBase::BossDropItemByTickets(const FTransform SpawnTransform, int32 TicketIndex) {
    return 0;
}








