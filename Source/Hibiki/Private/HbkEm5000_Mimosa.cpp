#include "HbkEm5000_Mimosa.h"
#include "Components/SceneComponent.h"
#include "HbkAltitudeControlComponent.h"
#include "HbkBossAttackIntervalComponent.h"
#include "HbkBossBeChasedComponent.h"
#include "HbkBossSelectTagComponent.h"
#include "HbkButtonWidgetComponent.h"
#include "HbkComplexLauncherComponent.h"
#include "HbkDecalPastingComponent.h"
#include "HbkEnemyAttackNoticeComponent.h"
#include "HbkEqualizerWingAttackComponent.h"
#include "HbkEquipComponent.h"
#include "HbkMultipleToughComponent.h"
#include "HbkRhythmSynchroSignalComponent.h"
#include "HbkSpectrumInfoComponent.h"

AHbkEm5000_Mimosa::AHbkEm5000_Mimosa(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetActorPrevLocation.AddDefaulted(3);
    this->Style = EHbkEm5000Style::Skirt;
    this->Parameter = NULL;
    this->DistanceForJamCombo = 200.00f;
    this->bIsDisableDamageFlight = false;
    this->bIsPerfectGuard = false;
    this->bIsDisablePerfectGuardCounter = false;
    this->bIsDisablePerfectGuard = false;
    this->bIsDisableAdditiveToughDamage = false;
    this->bIsDisableForceDamageRecover = false;
    this->bIsImmediatelyAfterToughBreak = false;
    this->bIsDisablePerfectGuardRecoverCallOnlyOnce = false;
    this->RestOfGuardState = 0;
    this->DisableDownAdditionRecoveryTimer = 0.00f;
    this->AvoidanceCoolTime = 0.00f;
    this->DamageRecoverAdjustAltitude = 300.00f;
    this->FallHeight_ByPlayer = 150.00f;
    this->WingPanelLSlotName = TEXT("M_em5100_wing_panel_L");
    this->WingPanelRSlotName = TEXT("M_em5100_wing_panel_R");
    this->CatchPanelSlotName = TEXT("M_em5100_catch_panel");
    this->SpectrumInfoType = EHbkEm5000SpectrumInfoType::Spectrum;
    this->SpectrumScale = 1.00f;
    this->PerfectGuardBreakParticle = NULL;
    this->PerfectGuardRecoverParticle = NULL;
    this->RhythmParryRepelledInputUI = NULL;
    this->TechniqueWaveParticle = NULL;
    this->ActionVoiceDT = NULL;
    this->HintTalkDT = NULL;
    this->Phase1StartHintTalkDelayNoteType = EHbkNote::Note_Quarter;
    this->Phase1StartHintTalkDelayNoteCount = 20.00f;
    this->Phase1StartHintTalkDelayTimer = 0.00f;
    this->RecoveryFromDownStateHintTalkDelayNoteType = EHbkNote::Note_Quarter;
    this->RecoveryFromDownStateHintTalkDelayNoteCount = 10.00f;
    this->RecoveryFromDownStateHintTalkDelayTimer = 0.00f;
    this->PerfectGuardSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PerfectGuardSceneComp"));
    this->MultipleToughComponent = CreateDefaultSubobject<UHbkMultipleToughComponent>(TEXT("MultipleTough"));
    this->EqualizerWingAttackComponent = CreateDefaultSubobject<UHbkEqualizerWingAttackComponent>(TEXT("EqualizerWingAttack"));
    this->EquipComponent = CreateDefaultSubobject<UHbkEquipComponent>(TEXT("HbkEquip"));
    this->RhythmSynchroSignalComponent = CreateDefaultSubobject<UHbkRhythmSynchroSignalComponent>(TEXT("RhythmSynchroSignal"));
    this->ComplexLauncherComponent = CreateDefaultSubobject<UHbkComplexLauncherComponent>(TEXT("ComplexLauncher"));
    this->AttackIntervalComponent = CreateDefaultSubobject<UHbkBossAttackIntervalComponent>(TEXT("AttackInterval"));
    this->BossSelectTagComponent = CreateDefaultSubobject<UHbkBossSelectTagComponent>(TEXT("BossSelectTag"));
    this->BossBeChasedComponent = CreateDefaultSubobject<UHbkBossBeChasedComponent>(TEXT("BossBeChased"));
    this->ButtonWidgetComponent = CreateDefaultSubobject<UHbkButtonWidgetComponent>(TEXT("HbkButtonWidget"));
    this->DecalPastingComponent = CreateDefaultSubobject<UHbkDecalPastingComponent>(TEXT("HbkDecalPasting"));
    this->AltitudeControlComponent = CreateDefaultSubobject<UHbkAltitudeControlComponent>(TEXT("HbkAltitudeControl"));
    this->EnemyAttackNoticeComponent = CreateDefaultSubobject<UHbkEnemyAttackNoticeComponent>(TEXT("HbkEnemyAttackNotice"));
    this->AttackNoticeComponent = NULL;
    this->SpectrumInfoComponent = CreateDefaultSubobject<UHbkSpectrumInfoComponent>(TEXT("SpectrumInfo"));
    this->ButtonWidgetComponent->SetupAttachment(RootComponent);
}

void AHbkEm5000_Mimosa::UpdateBeatSpectrum(float DeltaTime) {
}

void AHbkEm5000_Mimosa::TestForceActiveDamageState() {
}

void AHbkEm5000_Mimosa::SwitchToughNotifyDamage(EHbkEm5000ToughType Type) {
}

void AHbkEm5000_Mimosa::SpawnSBFMirrorBall() {
}

void AHbkEm5000_Mimosa::SpawnPerfectGuardRecoverParticle() {
}

void AHbkEm5000_Mimosa::SpawnPerfectGuardParticle(const AActor* DamageCauser) {
}

void AHbkEm5000_Mimosa::SpawnPerfectGuardBreakParticle(const AActor* DamageCauser) {
}

void AHbkEm5000_Mimosa::SkipShowParryInput() {
}

void AHbkEm5000_Mimosa::SetVisibleButtonWidget(bool visible) {
}

void AHbkEm5000_Mimosa::SetupPerfectGuard(const AActor* Attacker, const UDamageType* DamageType) {
}

void AHbkEm5000_Mimosa::SetupParameter(int32 StateIndex) {
}

void AHbkEm5000_Mimosa::SetStyle(EHbkEm5000Style InStyle) {
}

void AHbkEm5000_Mimosa::SetRestrictTagOnTheGround(int32 Count) {
}

void AHbkEm5000_Mimosa::SetRestrictTagInTheAir(int32 Count) {
}

void AHbkEm5000_Mimosa::SetReserveTagOnTheGround(int32 Count, int32 Priority, bool IsRemain) {
}

void AHbkEm5000_Mimosa::SetReserveTagInTheAir(int32 Count, int32 Priority, bool IsRemain) {
}

void AHbkEm5000_Mimosa::SetIdleStateForInTheDark() {
}

void AHbkEm5000_Mimosa::SetIdleState(bool IsCancelDamage) {
}

void AHbkEm5000_Mimosa::SetEnableToughNotifyDamage(EHbkEm5000ToughType Type, bool Enable) {
}

void AHbkEm5000_Mimosa::SetDisablePerfectGuradCounter(bool bIsDisable) {
}

void AHbkEm5000_Mimosa::SetConfrontBehaviorForBB(EHbkEm5000ConfrontBehavior BehaviorType) {
}

void AHbkEm5000_Mimosa::ResetCoolTimeAvoidance() {
}

bool AHbkEm5000_Mimosa::RequestAvoidance(const FVector& AttackTargetLocation) {
    return false;
}

void AHbkEm5000_Mimosa::PlayHintTalk(EHbkEm5000HintTalkType Type) {
}

void AHbkEm5000_Mimosa::PlayActionVoice(EHbkEm5000ActionVoiceType Type, bool IsForceStopPrevious) {
}

bool AHbkEm5000_Mimosa::PerfectGuardRequest(const AActor* Attacker, const UDamageType* DamageType) {
    return false;
}

void AHbkEm5000_Mimosa::OnTriggerHitSideStory() {
}

void AHbkEm5000_Mimosa::OnTriggerHitEqualizerWave() {
}

void AHbkEm5000_Mimosa::OnToughTakeDamage(int32 Index, AActor* DamageCauser, const UDamageType* InDamageType) {
}

void AHbkEm5000_Mimosa::OnToughDeactive(int32 Index, const FHbkMultipleToughParam& Param, AActor* DamageCauser) {
}

void AHbkEm5000_Mimosa::OnToughActiveRecovered(int32 Index, const FHbkMultipleToughParam& Param) {
}

void AHbkEm5000_Mimosa::OnToughActive(int32 Index, const FHbkMultipleToughParam& Param) {
}

void AHbkEm5000_Mimosa::OnTechniqueWaveVFX() {
}

void AHbkEm5000_Mimosa::OnStateChangeEvent(int32 StateIndex) {
}

void AHbkEm5000_Mimosa::OnSideStoryAdjustLocation() {
}

void AHbkEm5000_Mimosa::OnSideStoryActionStart() {
}

void AHbkEm5000_Mimosa::OnShieldLaunch() {
}

void AHbkEm5000_Mimosa::OnShieldEnd() {
}

void AHbkEm5000_Mimosa::OnRhythmTowerBattleEnd() {
}

void AHbkEm5000_Mimosa::OnPlayNotifyVFX() {
}

void AHbkEm5000_Mimosa::OnLaunchProjectile(FName SlotName, AHbkProjectile* Projectile, const FHbkComplexLaunchParam& LaunchParam) {
}

void AHbkEm5000_Mimosa::OnEqualizerWaveAdjustLocation() {
}

void AHbkEm5000_Mimosa::OnEqualizerWaveActionStart() {
}

void AHbkEm5000_Mimosa::OnEndNoDamageJudgeArea() {
}

void AHbkEm5000_Mimosa::OnDamageGuard(const AActor* Blocker, const AActor* Attacker, const UDamageType* DamageType) {
}

void AHbkEm5000_Mimosa::OnChangePhaseEvent(int32 StateIndex) {
}

void AHbkEm5000_Mimosa::OnAltitudeControlEnd(float Altitude, int32 Priority) {
}

bool AHbkEm5000_Mimosa::IsEnableToughNotifyDamage(EHbkEm5000ToughType Type) const {
    return false;
}

bool AHbkEm5000_Mimosa::IsEnableMultiTough(EHbkEm5000ToughType Type) const {
    return false;
}

bool AHbkEm5000_Mimosa::IsAttackTagOnTheGround(const FGameplayTag& InAttackTag) {
    return false;
}

EHbkEm5000Style AHbkEm5000_Mimosa::GetStyle() const {
    return EHbkEm5000Style::Skirt;
}

FHbkEm5000PhaseParameter AHbkEm5000_Mimosa::GetPhaseParameter(int32 StateIndex) const {
    return FHbkEm5000PhaseParameter{};
}

FHbkEm5000NoteTime AHbkEm5000_Mimosa::GetOpportunityForAttackFlamencoDance() const {
    return FHbkEm5000NoteTime{};
}

UHbkEqualizerWingAttackComponent* AHbkEm5000_Mimosa::GetEqualizerWingAttackComp() const {
    return NULL;
}

FRotator AHbkEm5000_Mimosa::GetDamageDirection(const AActor* DamageCauser) {
    return FRotator{};
}

FHbkEm5000PhaseParameter AHbkEm5000_Mimosa::GetCurrentPhaseParameter() const {
    return FHbkEm5000PhaseParameter{};
}

void AHbkEm5000_Mimosa::EndPerfectGuard() {
}



