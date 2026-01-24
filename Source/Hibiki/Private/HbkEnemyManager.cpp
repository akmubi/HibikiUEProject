#include "HbkEnemyManager.h"
#include "Templates/SubclassOf.h"

UHbkEnemyManager::UHbkEnemyManager() {
    this->DropItemByDamageTag_DT = NULL;
    this->EnemyDefaultParameter_DT = NULL;
    this->EnemySpawnGroupSet_DT = NULL;
    this->EnemySpawnByEm0570_DT = NULL;
    this->DefaultManagerAIClass = NULL;
    this->RhythmParryCoolTime = 0.00f;
    this->DefaultAttackableCount = 1;
    this->DefaultAttackRequestRejectCount = 3;
    this->DamageTypeForPlayer = NULL;
    this->DamageTypeForEnemy = NULL;
    this->AdditionalParamsAsset = NULL;
    this->bIsOverrideAnimCamera = false;
    this->bIsOverrideAttachSocket = false;
    this->bIsOverrideAnimTag = false;
    this->StunGaugeMngWidgetClass = NULL;
    this->HealthBarMngWidgetClass = NULL;
    this->RhythmParryRepelledInputUI = NULL;
    this->RhythmParryDodgeInputUI = NULL;
    this->RhythmParryFailedCheckCount = 2;
    this->RhythmParryFailedCount = 0;
    this->LongRangeAttackCoolTimeNoteCount = 16.00f;
    this->bIsAngryEnemyExist = false;
    this->bIsAudienceMode = false;
    this->StunGaugeManagerWidget = NULL;
    this->HealthBarManagerWidget = NULL;
}

void UHbkEnemyManager::SuspendEnemyBattle(UObject* WorldContextObject, bool bActivateInhibitController, FName GroupName) {
}

void UHbkEnemyManager::SubarmSteel(AHbkProjectile_Em0821SubArm* SubarmActor) {
}

bool UHbkEnemyManager::StartUntilStartedGrappling(const AHbkCharacter* Actor) {
    return false;
}

bool UHbkEnemyManager::StartGrappling(const AHbkCharacter* Actor) {
    return false;
}

void UHbkEnemyManager::StartCommandBattleAgainstKale(UObject* WorldContextObject, EHbkEm7500CommandBattleMode Mode) {
}

void UHbkEnemyManager::SkipRhythmParryInputTutorial() {
}

void UHbkEnemyManager::SetRhythmParryFailedCountMax() {
}

void UHbkEnemyManager::SetIsLongRangeAttackPermitSystemEnable(bool SystemEnable) {
}

void UHbkEnemyManager::SetInvincibleFromChaiEnemyAll(UObject* WorldContextObject, bool isInvincibleFromChai) {
}

void UHbkEnemyManager::SetEnemyAILogicEnable(bool Enable, int32 GroupID) {
}

void UHbkEnemyManager::SetEnableOverrideDamageReaction(bool IsEnable) {
}

void UHbkEnemyManager::SetEnableDeathTouch(bool IsEnable) {
}

void UHbkEnemyManager::SetDeadBombDamageInfo(bool isEnableForEnemy, bool isEnableForPlayer) {
}

void UHbkEnemyManager::SetCollisionResponses(UObject* WorldContextObject, bool IsEnableTakeDamage, bool isEnableReplusion, FName GroupName) {
}

void UHbkEnemyManager::SetBattleStateEnemyAll(UObject* WorldContextObject, bool BattleStateEnable) {
}

void UHbkEnemyManager::SetAttackableCount(int32 NewCount) {
}

void UHbkEnemyManager::SetAngerEnemyExist(bool Exist) {
}

void UHbkEnemyManager::ResumeEnemyBattle(UObject* WorldContextObject, bool bDeactivateInhibitController, FName GroupName) {
}

void UHbkEnemyManager::ResetAttackableCount() {
}

bool UHbkEnemyManager::RequestPerformMove(AHbkEnemyCharacter* EnemyPawn, AHbkEnemyAIController* EnemyAI) {
    return false;
}

bool UHbkEnemyManager::RequestPerformAttack(AHbkEnemyCharacter* Attacker, AHbkEnemyAIController* EnemyAI, bool IsInterrupt) {
    return false;
}

bool UHbkEnemyManager::RequestGrappling(const FHbkGrapplingInfo& NewGrapplingInfo) {
    return false;
}

void UHbkEnemyManager::RemoveCameraTargetActor(AActor* RemoveTargetActor) {
}

void UHbkEnemyManager::ReleaseSteelSubarm(FVector ReleaseLocation) {
}

void UHbkEnemyManager::RegisterStageController(AHbkBossStageControllerBase* InStageController) {
}

void UHbkEnemyManager::PreIdleEnemyReadyToFight(bool AiEnableOnly) {
}

bool UHbkEnemyManager::PlayRhythmAttack() {
    return false;
}

void UHbkEnemyManager::PermitDisableLongRangeAttack(AHbkEnemyCharacter* EnemyPawn, AHbkEnemyAIController* EnemyAI) {
}

void UHbkEnemyManager::OnStartGameoverSequencer() {
}

void UHbkEnemyManager::OnRhythmDodgeStartPlayerAction(FEnemyRhythmDodgePlayerActionInfo& PlayerActionInfo) {
}

void UHbkEnemyManager::OnRhythmDodgeEndPlayerAction() {
}

void UHbkEnemyManager::OnPrepareBattle() {
}

void UHbkEnemyManager::OnNextBeatUntilStartedGrappling(int32 NoteCount) {
}

void UHbkEnemyManager::OnNextBeatStartGrappling(int32 NoteCount) {
}

void UHbkEnemyManager::OnNextBeatOverrideGrapplingTarget(int32 NoteCount) {
}

void UHbkEnemyManager::OnNextBeatOverrideGrapplingOwner(int32 NoteCount) {
}

void UHbkEnemyManager::OnHologramAppearEnd() {
}

void UHbkEnemyManager::OnHologramAppearBegin(const FName GroupName) {
}

void UHbkEnemyManager::OnEnemyRhythmParryFailed(AHbkEnemyCharacter* Attacker) {
}

void UHbkEnemyManager::OnEnemyBeginOverkillState(AHbkEnemyCharacter* EnemyPawn, AHbkEnemyAIController* EnemyAI) {
}

void UHbkEnemyManager::OnEnemyAngerCamZoomUpEnd(AHbkEnemyCharacter* Attacker) {
}

void UHbkEnemyManager::OnEnemyAngerCamZoomUpBegin(AHbkEnemyCharacter* Attacker) {
}

void UHbkEnemyManager::OnEndBattle() {
}

void UHbkEnemyManager::OnDuringPrepare() {
}

void UHbkEnemyManager::OnBeginBattle() {
}

void UHbkEnemyManager::OnBeatEvent(int32 NoteCount, bool downBeat) {
}

bool UHbkEnemyManager::IsSuspendAiByGroup(FName GroupName) {
    return false;
}

bool UHbkEnemyManager::IsSpawnedGroup(const FName& GroupName) {
    return false;
}

bool UHbkEnemyManager::IsSpawnedEnemy(int32 EnemyId) {
    return false;
}

bool UHbkEnemyManager::IsRunningGrappling(const AHbkCharacter* Actor) {
    return false;
}

bool UHbkEnemyManager::IsPlayRhythmAttack() {
    return false;
}

bool UHbkEnemyManager::IsPermitLongRangeAttackEnable(AHbkEnemyCharacter* EnemyPawn, AHbkEnemyAIController* EnemyAI) {
    return false;
}

bool UHbkEnemyManager::IsExistCharacterAroundLocation(FVector Location, bool Distby2D) {
    return false;
}

bool UHbkEnemyManager::IsDestroyedGroup(const FName& GroupName) {
    return false;
}

bool UHbkEnemyManager::IsDestroyedEnemy(int32 EnemyId) {
    return false;
}

bool UHbkEnemyManager::IsCommandBattleSuccessfulKale(UObject* WorldContextObject, EHbkEm7500CommandBattleMode Mode) {
    return false;
}

bool UHbkEnemyManager::IsAngerEnemyExist() const {
    return false;
}

AHbkEnemyCharacter* UHbkEnemyManager::GetSubEnemyKorsicaJamcombo(AHbkEnemyCharacter* MainTarget) {
    return NULL;
}

AHbkProjectile_Em0821SubArm* UHbkEnemyManager::GetSteeledSubarm() {
    return NULL;
}

AHbkBossStageControllerBase* UHbkEnemyManager::GetStageController() const {
    return NULL;
}

bool UHbkEnemyManager::GetSpawnedEnemyList(TArray<AHbkEnemyAIController*>& EnemyAIList, TArray<AHbkEnemyCharacter*>& EnemyPawnList) {
    return false;
}

float UHbkEnemyManager::GetRhythmparryCoolTimeRemaining() const {
    return 0.0f;
}

AHbkManagerAIController* UHbkEnemyManager::GetManagerAIController() {
    return NULL;
}

int32 UHbkEnemyManager::GetJoiningGroupMemberCount(AHbkEnemyAIController* CharacterAI) const {
    return 0;
}

int32 UHbkEnemyManager::GetGroupEnemyRangeTypeCount(EHbkAttackRangeType RangeType, AHbkEnemyAIController* CharacterAI) const {
    return 0;
}

int32 UHbkEnemyManager::GetCombatEnemyCount(const FVector& Pos, float CombatRange, bool bIncludingNonCambat) const {
    return 0;
}

AHbkBossCharacterBase* UHbkEnemyManager::GetBossCharacter(int32 Index) const {
    return NULL;
}

AHbkBossAIController* UHbkEnemyManager::GetBossAI(int32 Index) const {
    return NULL;
}

AHbkBattleAreaActor* UHbkEnemyManager::GetActiveBattleAreaActor() {
    return NULL;
}

void UHbkEnemyManager::EnemyStatusToAnger(AHbkEnemyCharacter* Attacker, FVector TargetLocation, bool bIsKeepCurrentLocAndRot) {
}

void UHbkEnemyManager::EnemyRhythmAttackReactionEnd() {
}

void UHbkEnemyManager::EnemyExAttackHit(AHbkEnemyCharacter* Attacker, UAnimSequenceBase* PlayerReactAnim, FVector TargetLocation, bool bIsKeepCurrentLocAndRot) {
}

void UHbkEnemyManager::EndRTKaleBattle(UObject* WorldContextObject) {
}

void UHbkEnemyManager::CancelApplyGrappling(const AHbkCharacter* Owner) {
}

void UHbkEnemyManager::CallOnRhythmParryTutorialEnd() {
}

void UHbkEnemyManager::ApplyGrappling(const FHbkGrapplingInfo& NewGrapplingInfo) {
}

bool UHbkEnemyManager::ApplyDamageGrappling(TSubclassOf<UDamageType> DamageTypeClass) {
    return false;
}

void UHbkEnemyManager::AddCameraTargetActor(AActor* NewTargetActor) {
}

void UHbkEnemyManager::ActiveVFXBasicFireworkWithTimerRekka(UObject* WorldContextObject, EHbkNote NoteType, float NoteCount) {
}

void UHbkEnemyManager::ActivateEnemyAll(UObject* WorldContextObject, AActor* Activator) {
}

void UHbkEnemyManager::ActivateBattleAreaActor(UObject* WorldContextObject, bool bActivate, AActor* Activator) {
}

bool UHbkEnemyManager::AcceptApplyGrappling(const AHbkCharacter* Owner, AHbkCharacter* Target) {
    return false;
}


