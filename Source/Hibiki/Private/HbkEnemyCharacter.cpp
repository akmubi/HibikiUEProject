#include "HbkEnemyCharacter.h"
#include "HbkActionParamComponent.h"
#include "HbkBarrierComponent.h"
#include "HbkBeatSignComponent.h"
#include "HbkDamageComponent.h"
#include "HbkEnemyAssistAttackComponent.h"
#include "HbkEnemyMovementComponent.h"
#include "HbkEnemyVisualizeStateComponent.h"
#include "HbkMagneticPointComponent.h"
#include "HbkToughComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AHbkEnemyCharacter::AHbkEnemyCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHbkEnemyMovementComponent>(TEXT("CharMoveComp"))) {
    this->BeatSignComp = CreateDefaultSubobject<UHbkBeatSignComponent>(TEXT("BeatSign"));
    this->ActionParam = CreateDefaultSubobject<UHbkActionParamComponent>(TEXT("ActionParam"));
    this->HbkDamage = CreateDefaultSubobject<UHbkDamageComponent>(TEXT("HbkDamage"));
    this->HbkToughComp = CreateDefaultSubobject<UHbkToughComponent>(TEXT("HbkToughComp"));
    this->HbkMagneticPoint = CreateDefaultSubobject<UHbkMagneticPointComponent>(TEXT("HbkMagneticPoint"));
    this->HbkBarrierComp = CreateDefaultSubobject<UHbkBarrierComponent>(TEXT("HbkBarrierComp"));
    this->VisualizeStateComponent = CreateDefaultSubobject<UHbkEnemyVisualizeStateComponent>(TEXT("VisualizeState"));
    this->HbkAssistAttack = CreateDefaultSubobject<UHbkEnemyAssistAttackComponent>(TEXT("HbkAssistAttack"));
    this->bEnableHitSlow = false;
    this->OnBeatAttackMontageData = NULL;
    this->GraceTimeUntileActionState = 1.00f;
    this->GraceTimeUntileAttackState = 2.00f;
    this->bShownCharacter = true;
    this->HologramAppearVFX = NULL;
    this->HologramAppearSE = NULL;
    this->TrainingRoomKillEnemyType = EHbkEnemyCategoryType::None;
    this->NewHealthMax = 0.00f;
    this->bCanEverRotateDamageCauser = true;
    this->DeadEffect = NULL;
    this->PlayingDeadEffectPSC = NULL;
    this->AttachSocketNameByExpVfx = TEXT("spine_00");
    this->pDeadExplosionEffect = NULL;
    this->pDeadExplosionHomerunEffect = NULL;
    this->AttachSocketNameByExpSE = TEXT("pelvis");
    this->pAkEventDeadExplosion = NULL;
    this->pAkEventDeadExplosionHomerun = NULL;
    this->ToughDamageByRepelled = 0.00f;
    this->DirectionalyRepelledDamageRate = 1.50f;
    this->WindedToughDamageRate = 3.00f;
    this->WindDamageTimeByNoteCount = 4.00f;
    this->SheerHeartVFXAttachedName = TEXT("head");
    this->SheerHeartA_VFX_PS = NULL;
    this->SheerHeartB_VFX_PS = NULL;
    this->pSheerHeartLoopSE = NULL;
    this->pSheerHeartStopSE = NULL;
    this->bIsLateDeadCheck = false;
    this->bIsAlreadyDead = false;
    this->bIsDeadNotified = false;
    this->bIsSelfDestruction = false;
    this->BHCollisionType = ECC_GameTraceChannel10;
    this->bIsJamComboAttackInAttachWithSocket = true;
    this->RhythmTowerAddTime = 0.00f;
    this->bIsCleanDestroyed = false;
    this->pAkEm0570DrainLoop = NULL;
    this->pAkEm0570DrainEnd = NULL;
    this->psDrainVFX = NULL;
    this->FallLimit = 7000.00f;
    this->bIsFallLimitCheckEnable = true;
    this->HbkMagneticPoint->SetupAttachment(RootComponent);
}

void AHbkEnemyCharacter::UpdateDamageState(float DeltaTime, EEnemyUpdateState& ResultExec) {
}

void AHbkEnemyCharacter::UpdateAttackState(float DeltaTime, EEnemyUpdateState& ResultExec) {
}

void AHbkEnemyCharacter::UpdateActionState(float DeltaTime, EEnemyUpdateState& ResultExec) {
}

void AHbkEnemyCharacter::ShowWeaponBySequencer() {
}

void AHbkEnemyCharacter::SetWindStunState(bool Enable) {
}

void AHbkEnemyCharacter::SetVisibilityToughGauge(bool bVisible) {
}

void AHbkEnemyCharacter::SetVisibilityHealthBar(bool bVisible) {
}

void AHbkEnemyCharacter::SetSelfDestructionFlag(bool isSelfDestruction) {
}

void AHbkEnemyCharacter::SetRhythmDodgeTutorial(bool TutorialEnable) {
}

void AHbkEnemyCharacter::SetRhythmAttackTutorial(bool TutorialEnable) {
}

void AHbkEnemyCharacter::SetOnLandState(bool IsBound) {
}

void AHbkEnemyCharacter::SetInvincibleFromChaiWithTimer(bool IsInvincible, float StopTimer) {
}

void AHbkEnemyCharacter::SetInvincibleFromChai(bool IsInvincible) {
}

void AHbkEnemyCharacter::SetInitializedFlag(bool NewIsInitialized) {
}

void AHbkEnemyCharacter::SetHologramActivateGroup(const EHbkHologramCharaPostActivateGroup HologramGroup) {
}

void AHbkEnemyCharacter::SetDownState(bool Enable) {
}

void AHbkEnemyCharacter::SetDownPosition(const FVector& Pos) {
}

void AHbkEnemyCharacter::SetAutoActionRejectMagnet(bool bNewRejectMagnet) {
}

void AHbkEnemyCharacter::RestartAILogic() {
}

void AHbkEnemyCharacter::ResetMovementMode() {
}

void AHbkEnemyCharacter::RemoveHealthBar() {
}

void AHbkEnemyCharacter::RemoveDamageReactionAssetByAssetName(const UHbkEnemyDamageReaction* Asset) {
}

bool AHbkEnemyCharacter::RemoveDamageReactionAsset(int32 AssetIndex) {
    return false;
}

void AHbkEnemyCharacter::RemoveAssistExclusionTag(const FGameplayTag ExclusionTag) {
}

void AHbkEnemyCharacter::Receive_PostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkEnemyCharacter::Receive_PostAttackBlock(const AActor* Blocker, const AActor* Attacker, const UDamageType* DamageType) {
}

void AHbkEnemyCharacter::Receive_OnToughDeactivated() {
}

void AHbkEnemyCharacter::Receive_OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkEnemyCharacter::Receive_OnEndSpecialAttack() {
}

void AHbkEnemyCharacter::Receive_OnEndJamComboAttack() {
}

void AHbkEnemyCharacter::Receive_OnEndJamCombo() {
}

void AHbkEnemyCharacter::Receive_OnEndGrappling(const FHbkGrapplingInfo& GrapplingInfo) {
}

void AHbkEnemyCharacter::Receive_OnBeginSpecialAttack(bool bIncludingCamera) {
}

void AHbkEnemyCharacter::Receive_OnBeginJamComboAttack() {
}

void AHbkEnemyCharacter::Receive_OnBeginJamCombo() {
}

void AHbkEnemyCharacter::Receive_OnBeginGrappling(const FHbkGrapplingInfo& GrapplingInfo) {
}

void AHbkEnemyCharacter::Receive_OnBeatHitStart(int32 BeatHitId, EHbkBeatHitType BeatHitType, float PlayRate, FVector2D Offset, float Scale) {
}

void AHbkEnemyCharacter::Receive_OnBeatHitResult(int32 BeatHitId, EHbkBeatHitInputResult InputResult) {
}

void AHbkEnemyCharacter::Receive_OnAcceptedGrappling(const FHbkGrapplingInfo& GrapplingInfo) {
}

void AHbkEnemyCharacter::Receive_OnAbortGrappling(const FHbkGrapplingInfo& GrapplingInfo) {
}

void AHbkEnemyCharacter::PreIdleToReadyFight() {
}

void AHbkEnemyCharacter::PerformRhythmDodge() {
}

void AHbkEnemyCharacter::PerformRhythmAttack() {
}

void AHbkEnemyCharacter::PerformDamageFromTags(const FGameplayTagContainer& DamageTags, const FHbkDamageParam DamageParam) {
}

void AHbkEnemyCharacter::PerformDamageFromAnimation(UAnimSequenceBase* Animation, const FHbkDamageParam DamageParam) {
}

void AHbkEnemyCharacter::PerformDamage(const FGameplayTagContainer& DamageTags) {
}

void AHbkEnemyCharacter::PerformAttackFromAnimation(UAnimSequenceBase* Animation, const FHbkEnemyAttackParam AttackParam) {
}

void AHbkEnemyCharacter::PerformAttack3(const FGameplayTag AttackTag, const FHbkEnemyAttackParam AttackParam) {
}

void AHbkEnemyCharacter::PerformAssistAttack(const FGameplayTag AttackTag, const FHbkEnemyAttackParam AttackParam) {
}

void AHbkEnemyCharacter::PerformActionFromAnimation(UAnimSequenceBase* Animation, const FHbkActionParam NewActionParam) {
}

void AHbkEnemyCharacter::PerformAction(const FGameplayTag ActionTag, const FHbkActionParam NewActionParam) {
}

void AHbkEnemyCharacter::OnSyncOnceBeatStartRhythmDodge(int32 NoteCount) {
}

void AHbkEnemyCharacter::OnSyncOnceBeatStartRhythmAttack(int32 NoteCount) {
}

void AHbkEnemyCharacter::OnStartGameoverSequencer() {
}

void AHbkEnemyCharacter::OnRep_ShownCharacter() {
}

void AHbkEnemyCharacter::OnMagnetRelease(AHbkPlayerCharacterBase* Player, UHbkMagneticPointComponent* MagneticPoint) {
}

void AHbkEnemyCharacter::OnMagnetReached(AHbkPlayerCharacterBase* Player, UHbkMagneticPointComponent* MagneticPoint) {
}

void AHbkEnemyCharacter::OnMagnetHit(AHbkPlayerCharacterBase* Player, UHbkMagneticPointComponent* MagneticPoint) {
}

void AHbkEnemyCharacter::OnMagnetBackStab(AHbkPlayerCharacterBase* Player, UHbkMagneticPointComponent* MagneticPoint) {
}

void AHbkEnemyCharacter::OnLanding(const FHitResult& Hit) {
}

void AHbkEnemyCharacter::OnBeatPerformAttack(int32 NoteCount) {
}

void AHbkEnemyCharacter::OnBeatPerformAction(int32 NoteCount) {
}

void AHbkEnemyCharacter::OnAttack2(const FHbkEnemyAttackAnimInfo& AnimInfo, FHbkEnemyAttackParam AttackParam) {
}

void AHbkEnemyCharacter::OnAttack(const FHbkEnemyAttackInfo& attackInfo, FHbkEnemyAttackParam AttackParam) {
}

void AHbkEnemyCharacter::OnActivate() {
}

bool AHbkEnemyCharacter::IsWindStunState() const {
    return false;
}

bool AHbkEnemyCharacter::IsRhythmDodgeTutorial() {
    return false;
}

bool AHbkEnemyCharacter::IsRhythmAttackTutorial() {
    return false;
}

bool AHbkEnemyCharacter::IsOverkillState() {
    return false;
}

bool AHbkEnemyCharacter::IsJamComboState() const {
    return false;
}

bool AHbkEnemyCharacter::IsInitialized() {
    return false;
}

bool AHbkEnemyCharacter::IsInCameraView(const float ThresholdValue) {
    return false;
}

bool AHbkEnemyCharacter::IsDownState() const {
    return false;
}

bool AHbkEnemyCharacter::IsDebugDisabledAction() const {
    return false;
}

bool AHbkEnemyCharacter::IsDamageState() const {
    return false;
}

bool AHbkEnemyCharacter::IsDamagedSpecialAttack() const {
    return false;
}

bool AHbkEnemyCharacter::IsDamagedJamComboAttack() const {
    return false;
}

bool AHbkEnemyCharacter::IsAttackState() const {
    return false;
}

bool AHbkEnemyCharacter::IsActionState() const {
    return false;
}

bool AHbkEnemyCharacter::GetVisibilityToughGauge() const {
    return false;
}

bool AHbkEnemyCharacter::GetVisibilityHealthBar() const {
    return false;
}

UHbkToughComponent* AHbkEnemyCharacter::GetToughComponent() const {
    return NULL;
}

FEnemyStateInfo AHbkEnemyCharacter::GetStateInfo() const {
    return FEnemyStateInfo{};
}

UHbkEnemyAnimInstance* AHbkEnemyCharacter::GetHbkEnemyAnimInstance() const {
    return NULL;
}

AHbkEnemyAIController* AHbkEnemyCharacter::GetHbkEnemyAI() const {
    return NULL;
}

FGameplayTag AHbkEnemyCharacter::GetEnemyTypeTag() const {
    return FGameplayTag{};
}

UHbkEnemyMovementComponent* AHbkEnemyCharacter::GetEnemyMovement() const {
    return NULL;
}

UHbkDamageComponent* AHbkEnemyCharacter::GetDamageComp() const {
    return NULL;
}

UHbkEnemyAttackInfoComponent* AHbkEnemyCharacter::GetAttackInfoComp() const {
    return NULL;
}

UHbkActionParamComponent* AHbkEnemyCharacter::GetActionParamComp() const {
    return NULL;
}

void AHbkEnemyCharacter::ForceToughDisable() {
}

void AHbkEnemyCharacter::ForceShieldDisable() {
}

void AHbkEnemyCharacter::ForceBarrierDisable(bool bIncrementMetrics) {
}

void AHbkEnemyCharacter::EventPostDied() {
}

int32 AHbkEnemyCharacter::DropItemByTickets(const FTransform SpawnTransform) {
    return 0;
}

void AHbkEnemyCharacter::DropItemBySpecialAtkHelp(float DropRate, TSubclassOf<UHbkItemObject> DropItemClass) {
}

void AHbkEnemyCharacter::DropItembyDamaged(AActor* DamageCauser, float Value, float PreValue, float HealthRate) {
}

UHbkEnemyHealthBarWidget* AHbkEnemyCharacter::CreateHealthBar() {
    return NULL;
}

void AHbkEnemyCharacter::ClearOldDamageParam() {
}

void AHbkEnemyCharacter::CleanDestroy() {
}

void AHbkEnemyCharacter::CancelDamageState(bool StopLogic) {
}

void AHbkEnemyCharacter::CancelAttackState(bool StopLogic, float BlendOutTime) {
}

void AHbkEnemyCharacter::CancelAllState(bool StopLogic) {
}

void AHbkEnemyCharacter::CancelActionState(bool StopLogic) {
}

void AHbkEnemyCharacter::CallParryCompleted() {
}

float AHbkEnemyCharacter::CalcWindStunTime(const float NoteTime, const UTngDamageType* TngDamageType) {
    return 0.0f;
}















void AHbkEnemyCharacter::AddAssistExclusionTag(const FGameplayTag ExclusionTag) {
}

void AHbkEnemyCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHbkEnemyCharacter, bShownCharacter);
    DOREPLIFETIME(AHbkEnemyCharacter, UserName);
}


