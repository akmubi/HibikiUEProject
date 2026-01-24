#include "HbkEm6000_Roquefort.h"
#include "HbkBarrierComponent.h"
#include "HbkBossAttackIntervalComponent.h"
#include "HbkBossBeChasedComponent.h"
#include "HbkBossSelectTagComponent.h"
#include "HbkCoinBlockerComponent.h"
#include "HbkComplexLauncherComponent.h"
#include "HbkEm6000_BehaviorPhase2Component.h"
#include "HbkEm6000_BehaviorPhase4Component.h"
#include "HbkEm6000_DirectAttackComponent.h"
#include "HbkEm6000_GuardComponent.h"
#include "HbkEm6000_MovementComponent.h"
#include "HbkEm6000_ShieldComponent.h"
#include "HbkEquipComponent.h"
#include "HbkFaceShadowComponent.h"
#include "HbkPartnerAppearPointComponent.h"
#include "HbkPartnerTargetPointComponent.h"
#include "HbkPlayerMovePointComponent.h"
#include "HbkReceiveBeyondDamageComponent.h"
#include "HbkRhythmSynchroSignalComponent.h"

AHbkEm6000_Roquefort::AHbkEm6000_Roquefort(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHbkEm6000_MovementComponent>(TEXT("CharMoveComp")).SetDefaultSubobjectClass<UHbkBarrierComponent>(TEXT("HbkBarrierComp"))) {
    this->TargetActorPrevLocation.AddDefaulted(3);
    this->EquipComponent = CreateDefaultSubobject<UHbkEquipComponent>(TEXT("HbkEquip"));
    this->RhythmSynchroSignalComponent = CreateDefaultSubobject<UHbkRhythmSynchroSignalComponent>(TEXT("RhythmSynchroSignal"));
    this->AttackIntervalComponent = CreateDefaultSubobject<UHbkBossAttackIntervalComponent>(TEXT("AttackInterval"));
    this->BossBeChasedComponent = CreateDefaultSubobject<UHbkBossBeChasedComponent>(TEXT("BossBeChased"));
    this->BossSelectTagComponent = CreateDefaultSubobject<UHbkBossSelectTagComponent>(TEXT("BossSelectTag"));
    this->ReceiveBeyondDamageComponent = CreateDefaultSubobject<UHbkReceiveBeyondDamageComponent>(TEXT("ReceiveBeyondDamage"));
    this->ComplexLauncherComponent = CreateDefaultSubobject<UHbkComplexLauncherComponent>(TEXT("ComplexLauncher"));
    this->ShieldComponent = CreateDefaultSubobject<UHbkEm6000_ShieldComponent>(TEXT("HbkShield"));
    this->GuardComponent = CreateDefaultSubobject<UHbkEm6000_GuardComponent>(TEXT("Guard"));
    this->DirectAttackComponent = CreateDefaultSubobject<UHbkEm6000_DirectAttackComponent>(TEXT("DirectAttack"));
    this->CoinBlockerComponent = CreateDefaultSubobject<UHbkCoinBlockerComponent>(TEXT("CoinBlocker"));
    this->PartnerTargetPointComponent = CreateDefaultSubobject<UHbkPartnerTargetPointComponent>(TEXT("PartnerTargetPoint"));
    this->PartnerAppearPointComponent = CreateDefaultSubobject<UHbkPartnerAppearPointComponent>(TEXT("PartnerAppearPoint"));
    this->PlayerMovePointComponent = CreateDefaultSubobject<UHbkPlayerMovePointComponent>(TEXT("PlayerMovePoint"));
    this->FaceShadowComponent = CreateDefaultSubobject<UHbkFaceShadowComponent>(TEXT("HbkFaceShadow"));
    this->BehaviorPhase2Component = CreateDefaultSubobject<UHbkEm6000_BehaviorPhase2Component>(TEXT("BehaviorPhase2"));
    this->BehaviorPhase4Component = CreateDefaultSubobject<UHbkEm6000_BehaviorPhase4Component>(TEXT("BehaviorPhase4"));
    this->Parameter = NULL;
    this->PartsInfoAsset = NULL;
    this->BodyMeshInfoAsset = NULL;
    this->CurrentBodyMeshType = EHbkEm6000_BodyMeshType::Human;
    this->AdjustAnyAttackDataTableHuman = NULL;
    this->AdjustAnyAttackDataTableWolf = NULL;
    this->ActionVoiceDT = NULL;
    this->HintTalkDT = NULL;
    this->StickSlotName = TEXT("Wp_Stick");
    this->DirectAttackTriggerDamageTypeClass = NULL;
    this->DirectAttackDamageTypeClass = NULL;
    this->TransformHumanAnimEm6100 = NULL;
    this->TransformHumanAnimEm6400 = NULL;
    this->TransformHumanAnimEm6001 = NULL;
    this->TransformWolfAnimEm6100 = NULL;
    this->TransformWolfAnimEm6400 = NULL;
    this->TransformWolfAnimEm6001 = NULL;
    this->bIsEnableDebugDraw = false;
}

void AHbkEm6000_Roquefort::TransformWolf(bool bIsImmediately) {
}

void AHbkEm6000_Roquefort::TransformHuman(bool bIsImmediately) {
}

void AHbkEm6000_Roquefort::TestChangeWolf() {
}

void AHbkEm6000_Roquefort::TestChangeHuman() {
}

void AHbkEm6000_Roquefort::SuccessCommandBattleForPhase6() {
}

void AHbkEm6000_Roquefort::StartAttack() {
}

void AHbkEm6000_Roquefort::SetupParameter(int32 StateIndex) {
}

void AHbkEm6000_Roquefort::SetRootMotionVelocityScaleEnable(bool bIsEnable) {
}

void AHbkEm6000_Roquefort::SetRootMotionVelocityScale(const FVector& Scale) {
}

void AHbkEm6000_Roquefort::SetRepulsionParams(float CoreRadius, float PersonalRadius) {
}

void AHbkEm6000_Roquefort::SetNearTargetPosition(bool bEnable, const FVector& BasePos) {
}

void AHbkEm6000_Roquefort::SetMiniGamePlayerTransform(const FTransform& Location) {
}

void AHbkEm6000_Roquefort::SetMiniGamePartnerTransform(const FTransform& Location) {
}

void AHbkEm6000_Roquefort::SetMiniGamePartnerTornadoTransform(const FTransform& Location) {
}

void AHbkEm6000_Roquefort::SetEnableDebugDraw(bool Enable) {
}

void AHbkEm6000_Roquefort::SetDisableJamComboAttack(bool bIsDisable) {
}

void AHbkEm6000_Roquefort::SetDefaultRepulsionParams() {
}

void AHbkEm6000_Roquefort::SetBeforeSignalAttack(bool bEnable) {
}

void AHbkEm6000_Roquefort::ResetRootMotionVelocityScale() {
}

void AHbkEm6000_Roquefort::RequestTransformWolf(bool bIsImmediately) {
}

void AHbkEm6000_Roquefort::RequestTransformHuman(bool bIsImmediately) {
}

void AHbkEm6000_Roquefort::PlayHintTalk(EHbkEm6000_HintTalkType Type) {
}

void AHbkEm6000_Roquefort::PlayActionVoice(EHbkEm6000_ActionVoiceType Type, bool IsForceStopPrevious) {
}

void AHbkEm6000_Roquefort::OnStateChangeEvent(int32 StateIndex) {
}

void AHbkEm6000_Roquefort::OnLaunchProjectile(FName SlotName, AHbkProjectile* Projectile, const FHbkComplexLaunchParam& LaunchParam) {
}

void AHbkEm6000_Roquefort::OnCommandBattleSuccessFinisher() {
}

void AHbkEm6000_Roquefort::OnCommandBattleResult(EHbkBossCommandBattleResult Result) {
}

void AHbkEm6000_Roquefort::OnChangeHealthEvent(float Value, float PrevValue, float ValueRate) {
}

bool AHbkEm6000_Roquefort::IsWolf() const {
    return false;
}

bool AHbkEm6000_Roquefort::IsTransforming() const {
    return false;
}

bool AHbkEm6000_Roquefort::IsRootMotionVelocityScaleEnable() const {
    return false;
}

bool AHbkEm6000_Roquefort::IsResourceLoaded() const {
    return false;
}

bool AHbkEm6000_Roquefort::IsPlayingSpecialAttack() const {
    return false;
}

bool AHbkEm6000_Roquefort::IsPlayingJamComboAttack() const {
    return false;
}

bool AHbkEm6000_Roquefort::IsIntermissionControllerRunning() const {
    return false;
}

bool AHbkEm6000_Roquefort::IsHuman() const {
    return false;
}

bool AHbkEm6000_Roquefort::IsEnableDebugDraw() const {
    return false;
}

bool AHbkEm6000_Roquefort::IsDamageStateForFirstHit() const {
    return false;
}

bool AHbkEm6000_Roquefort::IsBeforeSignalAttack() const {
    return false;
}

UHbkPlayerMovePointComponent* AHbkEm6000_Roquefort::GetUHbkPlayerMovePointComp() {
    return NULL;
}

FGameplayTag AHbkEm6000_Roquefort::GetSelectedTag() const {
    return FGameplayTag{};
}

int32 AHbkEm6000_Roquefort::GetRepelledCount() const {
    return 0;
}

float AHbkEm6000_Roquefort::GetPlayRate() const {
    return 0.0f;
}

FGameplayTag AHbkEm6000_Roquefort::GetPlayingAttackAnimTag() const {
    return FGameplayTag{};
}

FGameplayTag AHbkEm6000_Roquefort::GetPlayingActionAnimTag() const {
    return FGameplayTag{};
}

FHbkEm6000_PhaseParameter AHbkEm6000_Roquefort::GetPhaseParameter(int32 StateIndex) const {
    return FHbkEm6000_PhaseParameter{};
}

FHbkEm6000_PhaseFixedParameter AHbkEm6000_Roquefort::GetPhaseFixedParameter(int32 StateIndex) const {
    return FHbkEm6000_PhaseFixedParameter{};
}

UHbkPartnerTargetPointComponent* AHbkEm6000_Roquefort::GetPartnerTargetPointComp() {
    return NULL;
}

UHbkPartnerAppearPointComponent* AHbkEm6000_Roquefort::GetPartnerAppearPointComp() {
    return NULL;
}

FVector AHbkEm6000_Roquefort::GetNearTargetPosition(const FVector& BasePos) const {
    return FVector{};
}

FTransform AHbkEm6000_Roquefort::GetMiniGamePlayerTransform() const {
    return FTransform{};
}

FTransform AHbkEm6000_Roquefort::GetMiniGamePartnerTransform() const {
    return FTransform{};
}

FTransform AHbkEm6000_Roquefort::GetMiniGamePartnerTornadoTransform() const {
    return FTransform{};
}

bool AHbkEm6000_Roquefort::GetDownStateTime(float& OutDownStateTime) const {
    return false;
}

EHbkDifficultyType AHbkEm6000_Roquefort::GetDifficulty() const {
    return EHbkDifficultyType::Easy;
}

bool AHbkEm6000_Roquefort::GetDamageRootMotionVelocityScale(FVector& OutDamageRootMotionVelocityScale) const {
    return false;
}

FHbkEm6000_PhaseParameter AHbkEm6000_Roquefort::GetCurrentPhaseParameter() const {
    return FHbkEm6000_PhaseParameter{};
}

FHbkEm6000_PhaseFixedParameter AHbkEm6000_Roquefort::GetCurrentPhaseFixedParameter() const {
    return FHbkEm6000_PhaseFixedParameter{};
}

void AHbkEm6000_Roquefort::ForceEndActionState() {
}

bool AHbkEm6000_Roquefort::CanReceiveSignalAttack() const {
    return false;
}



