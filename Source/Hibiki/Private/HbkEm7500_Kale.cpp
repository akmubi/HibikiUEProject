#include "HbkEm7500_Kale.h"
#include "HbkBossAttackIntervalComponent.h"
#include "HbkBossSelectTagComponent.h"
#include "HbkComplexLauncherComponent.h"
#include "HbkEm7500_AppealComponent.h"
#include "HbkEm7500_FloatingLaserComponent.h"
#include "HbkEm7500_MovementComponent.h"
#include "HbkEm7500_ParryComponent.h"
#include "HbkEnemyAttackNoticeComponent.h"
#include "HbkEnemyGrapplingEventComponent.h"
#include "HbkPlaySeByBeatComponent.h"
#include "HbkRhythmSynchroSignalComponent.h"
#include "Templates/SubclassOf.h"

AHbkEm7500_Kale::AHbkEm7500_Kale(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHbkEm7500_MovementComponent>(TEXT("CharMoveComp"))) {
    this->TargetActorPrevLocation.AddDefaulted(3);
    this->Const_UseParryRate = 1.00f;
    this->Const_UseParryIntervalTime = 10.00f;
    this->Const_KaleStunTime = 5.00f;
    this->Const_KaleLaunchStunTime = 2.50f;
    this->Parameter = NULL;
    this->AttackIntervalComponent = CreateDefaultSubobject<UHbkBossAttackIntervalComponent>(TEXT("AttackInterval"));
    this->BossSelectTagComponent = CreateDefaultSubobject<UHbkBossSelectTagComponent>(TEXT("BossSelectTag"));
    this->RhythmSynchroSignalComponent = CreateDefaultSubobject<UHbkRhythmSynchroSignalComponent>(TEXT("RhythmSynchroSignal"));
    this->ParryComponent = CreateDefaultSubobject<UHbkEm7500_ParryComponent>(TEXT("Parry"));
    this->ComplexLauncherComponent = CreateDefaultSubobject<UHbkComplexLauncherComponent>(TEXT("ComplexLauncher"));
    this->EnemyAttackNoticeComponent = CreateDefaultSubobject<UHbkEnemyAttackNoticeComponent>(TEXT("HbkEnemyAttackNotice"));
    this->AttackNoticeComponent = NULL;
    this->FloatingLaserRequestComponent = CreateDefaultSubobject<UHbkEm7500_FloatingLaserComponent>(TEXT("FloatingLaserRequest"));
    this->GrapplingEventComp = CreateDefaultSubobject<UHbkEnemyGrapplingEventComponent>(TEXT("GrapplingEventComp"));
    this->AppealComponent = CreateDefaultSubobject<UHbkEm7500_AppealComponent>(TEXT("AppealComp"));
    this->SeByBeatComponent = CreateDefaultSubobject<UHbkPlaySeByBeatComponent>(TEXT("SeByBeatComp"));
    this->FloatLaserNoticeParticle = NULL;
    this->FloatLaserAttackParticle = NULL;
    this->FloatLaserAttackSound = NULL;
    this->FloatLaserPreAttackNoticeParticle = NULL;
    this->FloatLaserPreAttackNoticeSound = NULL;
    this->FloatLaserPreAttackNoticeSound2 = NULL;
    this->FloatLaserPreAttackNoticeSoundInstFX = NULL;
    this->FloatLaserDamageType = NULL;
    this->FloatLaserDamageTypeP3 = NULL;
    this->FloatLaserMoveSound = NULL;
    this->FloatLaserShotFourCombiAttackSoundInstFx = NULL;
    this->ShotFourCombiRhythmParticle = NULL;
    this->ShotFourCombiRhythmSound = NULL;
    this->ShotFourCombiRhythmSoundInstFX = NULL;
    this->ShotFourCombiNoticeParticle = NULL;
    this->ShotFourCombiNoticeSound = NULL;
    this->ShotFourCombiNoticeSound2 = NULL;
    this->ShotFourCombiRhythmDT = NULL;
    this->ShotFourCombiDamageType = NULL;
    this->ShotFourCombiDamageTypeP3 = NULL;
    this->EnergySwordGazerDamageType = NULL;
    this->EnergySwordGazerDamageTypeP3 = NULL;
    this->ChildPartnerTarget = NULL;
    this->PartnerTargetClass = NULL;
    this->ArmKickbackDamageType = NULL;
    this->ArmKickbackAttackRadius = 0.00f;
    this->ArmKickbackPreAttackParticle = NULL;
    this->ArmKickbackPreAttackSound = NULL;
    this->ArmKickbackParticle = NULL;
    this->ArmKickbackSound = NULL;
    this->ArmSupportExecRateCurve = NULL;
    this->SuicideDamageType = NULL;
    this->BreakSArmLDamageType = NULL;
    this->BreakSArmRDamageType = NULL;
    this->BreakFArmDamageType = NULL;
    this->BreakBArmDamageType = NULL;
    this->bIsOpenCoverMeshForPhase3 = false;
    this->PeppermintIntervalTimer = 0.00f;
    this->MacaronIntervalTimer = 0.00f;
    this->KorsicaIntervalTimer = 0.00f;
    this->MacaronGravityTakeDamageRate = 1.50f;
    this->StunActioningDamageRate = 1.50f;
    this->NotStunActioningDamageRate = 0.50f;
    this->UnbrokenArmDamageRate = 0.25f;
    this->MeshType = EEm7500MeshType::Default;
    this->bIsSyncBeat = false;
    this->InAttachTimeToTarget = 1.00f;
    this->bIsAttachSweepToTarget = false;
    this->InAttachTimeToCamera = 0.00f;
    this->PositionCorrectionDivisionNumber = 8;
    this->PositionCorrectionDistance = 1000.00f;
    this->PositionCorrectionTraceType = TraceTypeQuery2;
    this->bSimpleRhythmAttackMode = false;
    this->bUseRhythmAttackTransOnGrappling = false;
    this->ActionVoiceDT = NULL;
    this->HintTalkDT = NULL;
    this->bIsEnableDebugDraw = false;
}

bool AHbkEm7500_Kale::UpdateAttack_ArmSupport(float DeltaTime) {
    return false;
}

bool AHbkEm7500_Kale::UpdateAttack_ArmFlamethrower(float DeltaTime) {
    return false;
}

bool AHbkEm7500_Kale::UpdateAttack_ArmCharge(float DeltaTime) {
    return false;
}

bool AHbkEm7500_Kale::UpdateAttack_ArmBeam(float DeltaTime) {
    return false;
}

bool AHbkEm7500_Kale::UpdateAction_ArmGuard(float DeltaTime) {
    return false;
}

void AHbkEm7500_Kale::StartStunAction() {
}

void AHbkEm7500_Kale::StartRhythmParryBit() {
}

UParticleSystemComponent* AHbkEm7500_Kale::SpawnVFX(UParticleSystem* Particle, const FTransform& Transform) {
    return NULL;
}

void AHbkEm7500_Kale::SetupParameter(int32 StateIndex) {
}

void AHbkEm7500_Kale::SettingArmAndBit(int32 StateIndex) {
}

void AHbkEm7500_Kale::SetStunActioning(bool Flag) {
}

void AHbkEm7500_Kale::SetStepHologramFlag(bool Flag) {
}

void AHbkEm7500_Kale::SetShotFourCombiStunExecFlag(bool IsExec) {
}

void AHbkEm7500_Kale::SetRunningQTEFlag(bool Flag) {
}

void AHbkEm7500_Kale::SetRhythmParryPhase3State(EEm7500RhythmParryState State) {
}

void AHbkEm7500_Kale::SetRhythmParryPhase1State(EEm7500RhythmParryState State) {
}

void AHbkEm7500_Kale::SetRepulsionUnmove(bool Enable) {
}

void AHbkEm7500_Kale::SetRemoteState(EEm7500RemoteState State) {
}

void AHbkEm7500_Kale::SetPartnerReactionExecFlag(bool IsExec) {
}

void AHbkEm7500_Kale::SetParryExecFlag(bool IsExec) {
}

void AHbkEm7500_Kale::SetParryEnableFlag(bool IsEnable) {
}

void AHbkEm7500_Kale::SetMeshType(EEm7500MeshType Type) {
}

void AHbkEm7500_Kale::SetIsReceiveSignalMultiSlash(bool bFlag) {
}

void AHbkEm7500_Kale::SetIdleState(bool IsAbortProjectile) {
}

void AHbkEm7500_Kale::SetEnableDebugDraw(bool Enable) {
}

void AHbkEm7500_Kale::SetContinuousStepFlag(bool Flag) {
}

void AHbkEm7500_Kale::SetBitActive(bool IsActive, bool IsDeactivateImmediate) {
}

void AHbkEm7500_Kale::SetArmTickAndVisible(bool IsEnable) {
}

void AHbkEm7500_Kale::ResetKaleStunTimerToLaunch() {
}

void AHbkEm7500_Kale::ResetHitAttackBlowOff() {
}

void AHbkEm7500_Kale::RequestFloatLaserForGameplayTag(const FGameplayTag& Tag) {
}

void AHbkEm7500_Kale::RequestFloatLaser(const FHbkEm7500FloatingLaserInfo& Info, bool IsAdjustNextNote) {
}

void AHbkEm7500_Kale::PlaySound(UAkAudioEvent* AkEvent, const FTransform& Transform) {
}

void AHbkEm7500_Kale::PlayHintTalk(EKaleHintTalkType Type) {
}

void AHbkEm7500_Kale::PlayActionVoice_SARMKickback() {
}

void AHbkEm7500_Kale::PlayActionVoice(EKaleActionVoiceType Type, bool IsForceStopPrevious) {
}

void AHbkEm7500_Kale::OnToughValueChanged() {
}

void AHbkEm7500_Kale::OnToughDeactive() {
}

void AHbkEm7500_Kale::OnStateChangeEvent(int32 StateIndex) {
}

void AHbkEm7500_Kale::OnStartGameOverSequence() {
}

void AHbkEm7500_Kale::OnSignalEvent(const FHbkRhythmSynchroSignalCue& SignalCue) {
}

void AHbkEm7500_Kale::OnPlayerDied(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkEm7500_Kale::OnloadCompleted() {
}

void AHbkEm7500_Kale::OnLaunchShotFourCombi(FName SlotName, AHbkProjectile* Projectile, const FHbkComplexLaunchParam& LaunchParam) {
}

void AHbkEm7500_Kale::OnEndState(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI) {
}

void AHbkEm7500_Kale::OnDamageDodge(const AActor* Blocker, const AActor* Attacker, const UDamageType* DamageType) {
}

void AHbkEm7500_Kale::OnDamagedHealth(AActor* Causer, float Value, float PrevValue, float ValueRate) {
}

void AHbkEm7500_Kale::OnDamageBlock(const AActor* Blocker, const AActor* Attacker, const UDamageType* DamageType) {
}

void AHbkEm7500_Kale::OnChangePhaseEvent(int32 StateIndex) {
}

void AHbkEm7500_Kale::OnBeginPartnerAttack(EHbkPartnerType PartnerType, EHbkPartnerAttackType AttackType) {
}

void AHbkEm7500_Kale::LaunchShotFourCombi(EHbkKaleShotFourCombiGroup Group) {
}

void AHbkEm7500_Kale::LaunchFloatLaser(EHbkEm7500FloatingLaserType Type) {
}

void AHbkEm7500_Kale::LaunchArmWhip() {
}

void AHbkEm7500_Kale::LaunchArmSupport() {
}

void AHbkEm7500_Kale::LaunchArmGuard() {
}

void AHbkEm7500_Kale::LaunchArmFlamethrower() {
}

void AHbkEm7500_Kale::LaunchArmCharge() {
}

void AHbkEm7500_Kale::LaunchArmBeam() {
}

bool AHbkEm7500_Kale::IsPlayingArmGuard() {
    return false;
}

bool AHbkEm7500_Kale::IsPlayingArmAnim(FName AnimSlotName) {
    return false;
}

bool AHbkEm7500_Kale::IsPassedPartnerReactionInterval(EHbkPartnerType PartnerType) const {
    return false;
}

bool AHbkEm7500_Kale::IsPartnerDamageTag(FGameplayTagContainer DamageTags) const {
    return false;
}

bool AHbkEm7500_Kale::IsOpenCoverMeshForPhase3() const {
    return false;
}

bool AHbkEm7500_Kale::IsHitAttackBlowOff() const {
    return false;
}

bool AHbkEm7500_Kale::IsExecutingFloatLaser() {
    return false;
}

bool AHbkEm7500_Kale::IsEnableDebugDraw() const {
    return false;
}

bool AHbkEm7500_Kale::IsBitActive() {
    return false;
}

bool AHbkEm7500_Kale::IsArmReady() {
    return false;
}

void AHbkEm7500_Kale::HealDamage(float HealValue) {
}

AActor* AHbkEm7500_Kale::GetSword() {
    return NULL;
}

float AHbkEm7500_Kale::GetStunTimer() {
    return 0.0f;
}

bool AHbkEm7500_Kale::GetStunActioning() const {
    return false;
}

bool AHbkEm7500_Kale::GetStepHologramFlag() {
    return false;
}

bool AHbkEm7500_Kale::GetShotFourCombiStunExecFlag() const {
    return false;
}

bool AHbkEm7500_Kale::GetRunningQTEFlag() {
    return false;
}

EEm7500RhythmParryState AHbkEm7500_Kale::GetRhythmParryPhase3State() {
    return EEm7500RhythmParryState::NotExec;
}

EEm7500RhythmParryState AHbkEm7500_Kale::GetRhythmParryPhase1State() {
    return EEm7500RhythmParryState::NotExec;
}

FHbkEm7500PhaseParameter AHbkEm7500_Kale::GetPhaseParameter(int32 StateIndex) const {
    return FHbkEm7500PhaseParameter{};
}

FGameplayTagContainer AHbkEm7500_Kale::GetPartnerReactionTags() {
    return FGameplayTagContainer{};
}

TMap<EHbkPartnerType, float> AHbkEm7500_Kale::GetPartnerReactionIntervalParam() {
    return TMap<EHbkPartnerType, float>();
}

bool AHbkEm7500_Kale::GetPartnerReactionExecFlag() const {
    return false;
}

bool AHbkEm7500_Kale::GetParryExecFlag() const {
    return false;
}

bool AHbkEm7500_Kale::GetParryEnableFlag() const {
    return false;
}

bool AHbkEm7500_Kale::GetIsReceiveSignalMultiSlash() const {
    return false;
}

bool AHbkEm7500_Kale::GetIsReadyMultiSlash() const {
    return false;
}

bool AHbkEm7500_Kale::GetIsHitArmKickback() const {
    return false;
}

bool AHbkEm7500_Kale::GetIsDamageDodging() const {
    return false;
}

bool AHbkEm7500_Kale::GetIsDamageBlocking() const {
    return false;
}

EEm7500DamageDodgingType AHbkEm7500_Kale::GetDamageDodgingType() const {
    return EEm7500DamageDodgingType::None;
}

FHbkEm7500PhaseParameter AHbkEm7500_Kale::GetCurrentPhaseParameter() const {
    return FHbkEm7500PhaseParameter{};
}

bool AHbkEm7500_Kale::GetContinuousStepFlag() {
    return false;
}

TArray<FHbkEm7500CheckDistanceInfo> AHbkEm7500_Kale::GetCheckDistanceParam() {
    return TArray<FHbkEm7500CheckDistanceInfo>();
}

AHbkEm7500_ArmBase* AHbkEm7500_Kale::GetArm(const FName& SlotName) const {
    return NULL;
}

TArray<AHbkEm7500_ArmBase*> AHbkEm7500_Kale::GetAllArm() {
    return TArray<AHbkEm7500_ArmBase*>();
}

void AHbkEm7500_Kale::ForceImmediateDeactivateBit() {
}

void AHbkEm7500_Kale::EntryQTEEvent(FGameplayTag ExecMontageTag) {
}

void AHbkEm7500_Kale::EndRhythmParryBit() {
}

void AHbkEm7500_Kale::ClearHitArmKickback() {
}

void AHbkEm7500_Kale::ClearDamageDodging() {
}

void AHbkEm7500_Kale::ClearDamageBlocking() {
}

void AHbkEm7500_Kale::ClearBlock() {
}

void AHbkEm7500_Kale::ChangeCoverMesh(bool bOpen, bool bIsPhase3) {
}

void AHbkEm7500_Kale::CallStepPostEffect(bool IsStepStart) {
}

void AHbkEm7500_Kale::CallEndRhythmParry() {
}

void AHbkEm7500_Kale::CallEndQTE() {
}




void AHbkEm7500_Kale::ApplyPartnerReactionInterval(EHbkPartnerType PartnerType) {
}

void AHbkEm7500_Kale::ApplyDamage(const FHitResult& HitResult, TSubclassOf<UDamageType> DamageType) {
}


