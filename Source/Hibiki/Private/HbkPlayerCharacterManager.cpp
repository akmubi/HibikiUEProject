#include "HbkPlayerCharacterManager.h"

UHbkPlayerCharacterManager::UHbkPlayerCharacterManager() {
    this->PartnerAppearTraceChannel = ECC_WorldStatic;
    this->PlayerTransTraceChannel = ECC_WorldStatic;
    this->BeatHitWidgetClass = NULL;
    this->PlayerStatusPresetTable = NULL;
    this->CostumeControllerClass = NULL;
    this->CostumeController = NULL;
}

void UHbkPlayerCharacterManager::ToggleRhythmAssistWidget() {
}

void UHbkPlayerCharacterManager::ThrowMagnetLine(FGameplayTag TargetAgentTag, float HitTime) {
}

void UHbkPlayerCharacterManager::SetNotDieMode_VC(UObject* WorldContextObject, bool bEnable) {
}

int32 UHbkPlayerCharacterManager::SetMoney(int32 NewMoney) {
    return 0;
}

void UHbkPlayerCharacterManager::SetGimmickTimer(float TimeRate) {
}

void UHbkPlayerCharacterManager::SetDefaultPlayerStateInfo(UObject* WorldContextObject) {
}

void UHbkPlayerCharacterManager::SetDebugMoney(const TArray<FString>& Args) {
}

void UHbkPlayerCharacterManager::SetDebugCircuit(const TArray<FString>& Args) {
}

void UHbkPlayerCharacterManager::SetCameraTransientAppendParam(UObject* WorldContextObject, const FHbkCameraAppendParam& AppendParam, FHbkCameraBlendParam BlendIn, FHbkCameraBlendParam BlendOut, float Duration, int32 Priority) {
}

void UHbkPlayerCharacterManager::SetCameraPermanentAppendParam(UObject* WorldContextObject, const FHbkCameraAppendParam& AppendParam, FHbkCameraBlendParam BlendIn) {
}

void UHbkPlayerCharacterManager::SetAllowQTEInput(bool AllowInput) {
}

void UHbkPlayerCharacterManager::Set808Visibility(bool bVisible) {
}

void UHbkPlayerCharacterManager::SelectPartner(EHbkPartnerType PartnerType) {
}

void UHbkPlayerCharacterManager::RevertPlayerCostume(UObject* WorldContextObject) {
}

void UHbkPlayerCharacterManager::RevertControlToPlayerCharacter(bool bTeleportMainPlayer) {
}

void UHbkPlayerCharacterManager::ResetPlayerStateStageParam(UObject* WorldContextObject) {
}

void UHbkPlayerCharacterManager::ResetPartnerState(bool bSkipDisappear) {
}

void UHbkPlayerCharacterManager::ResetManager() {
}

void UHbkPlayerCharacterManager::ResetCameraPermanentAppendParam(UObject* WorldContextObject, FHbkCameraBlendParam BlendOut) {
}

void UHbkPlayerCharacterManager::Receive_StartSequence(const FHbkPlayingLevelSeqInfo& Info) {
}

void UHbkPlayerCharacterManager::Receive_StartEventScene(const FHbkPlayingTalkEventSceneInfo& Info) {
}

void UHbkPlayerCharacterManager::Receive_OnStartEnemyAttackNotice(AHbkEnemyCharacter* Attacker) {
}

void UHbkPlayerCharacterManager::Receive_OnRhythmDodgeStartPlayerAction(const FEnemyRhythmDodgePlayerActionInfo& PlayerDodgeActionInfo) {
}

void UHbkPlayerCharacterManager::Receive_OnRhythmDodgeEndPlayerAction() {
}

void UHbkPlayerCharacterManager::Receive_OnPostStartPlay() {
}

void UHbkPlayerCharacterManager::Receive_OnKorsicaParryStart(UAnimSequenceBase* PlayerAction, float PlayRate) {
}

void UHbkPlayerCharacterManager::Receive_OnKorsicaMoveStart(bool bIsCircleMove, UAnimSequenceBase* PlayerAction, float PlayRate) {
}

void UHbkPlayerCharacterManager::Receive_OnEnemyToAnger(AHbkEnemyCharacter* Attacker, FVector TargetLocation, bool bIsKeepCurrentLocAndRot) {
}

void UHbkPlayerCharacterManager::Receive_OnEnemyExAttackHit(AHbkEnemyCharacter* Attacker, UAnimSequenceBase* PlayerAnim, FVector PlayerLocation, bool bIsKeepCurrentLocAndRot) {
}

void UHbkPlayerCharacterManager::Receive_OnEnemyCameraStart() {
}

void UHbkPlayerCharacterManager::Receive_OnEnemyCameraEnd(bool bEnabledDodgeMode) {
}

void UHbkPlayerCharacterManager::Receive_OnEndEnemyAttackNotice(AHbkEnemyCharacter* Attacker, bool IsParrySuccessful, UAnimSequenceBase* PlayerAction) {
}

void UHbkPlayerCharacterManager::Receive_OnBossRhythmParryStart(AHbkEnemyCharacter* Attacker, FBossRhythmAttackParam InParam) {
}

void UHbkPlayerCharacterManager::Receive_OnBossRhythmParryResult(AHbkEnemyCharacter* Attacker, FBossRhythmAttackParam InParam) {
}

void UHbkPlayerCharacterManager::Receive_OnBossCommandBattleResult(EHbkBossCommandBattleResult Result) {
}

void UHbkPlayerCharacterManager::Receive_OnBossCommandBattleInputResult(bool bIsPlayerNote, EHbkBossCommandBattleResult Result) {
}

void UHbkPlayerCharacterManager::Receive_OnAudienceModeEnd(bool IsPlayerAudience) {
}

void UHbkPlayerCharacterManager::Receive_OnAudienceModeBegin(bool IsPlayerAudience) {
}

void UHbkPlayerCharacterManager::Receive_OnAttackNoticeReactionEnd() {
}

void UHbkPlayerCharacterManager::Receive_EndSequence(const FHbkPlayingLevelSeqInfo& Info) {
}

void UHbkPlayerCharacterManager::Receive_EndEventScene(const FHbkPlayingTalkEventSceneInfo& Info) {
}

bool UHbkPlayerCharacterManager::PlayerTakeItem(UObject* WorldContextObject, const FGameplayTag InventoryId, int32 Count) {
    return false;
}

bool UHbkPlayerCharacterManager::PlayerShowItem(const FGameplayTag InventoryId) {
    return false;
}

void UHbkPlayerCharacterManager::OverridePlayerCostume(UObject* WorldContextObject, const FGameplayTag SetupCostumeTag) {
}

void UHbkPlayerCharacterManager::OnPlayerMoveEnded() {
}

void UHbkPlayerCharacterManager::OnNextSignalBeat(int32 NoteCount, bool bDownBeat) {
}

void UHbkPlayerCharacterManager::OnNextBeatStartJamCombo(int32 NoteCount) {
}

void UHbkPlayerCharacterManager::OnJamComboTargetPostTakeDamage(const UDamageType* DamageType) {
}

void UHbkPlayerCharacterManager::OnEndedPartnerAttack(AHbkPartnerCharacterBase* Partner) {
}

void UHbkPlayerCharacterManager::OnEndedPartnerAction(AHbkPartnerCharacterBase* Partner) {
}

void UHbkPlayerCharacterManager::OnEndCallPartnerSound(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}

void UHbkPlayerCharacterManager::OnDisappearPartner(AHbkPartnerCharacterBase* Partner, bool bIsAction) {
}

void UHbkPlayerCharacterManager::OnCloseStore() {
}

void UHbkPlayerCharacterManager::OnCloseCostume() {
}

void UHbkPlayerCharacterManager::LearnPlayerAbility(UObject* WorldContextObject, EHbkPlayerAppendAbilityType AbilityType) {
}

void UHbkPlayerCharacterManager::JoinedNewPartner(UObject* WorldContextObject, EHbkJoinedPartnerFlag NewPartner) {
}

bool UHbkPlayerCharacterManager::IsPlayerDead() const {
    return false;
}

bool UHbkPlayerCharacterManager::IsMainPlayerCharacter(AActor* Player) const {
    return false;
}

bool UHbkPlayerCharacterManager::IsJustTimingAttackDamageFromTags(const FGameplayTagContainer& AttackTags) const {
    return false;
}

bool UHbkPlayerCharacterManager::IsJustTimingAttackDamage(const UDamageType* DamageType) const {
    return false;
}

bool UHbkPlayerCharacterManager::IsJoinedPartner(EHbkPartnerType PartnerType) const {
    return false;
}

bool UHbkPlayerCharacterManager::IsDuringPriorityAction() const {
    return false;
}

void UHbkPlayerCharacterManager::InitRDGrowthParameter() {
}

bool UHbkPlayerCharacterManager::HasPlayerAbility(UObject* WorldContextObject, EHbkPlayerAppendAbilityType AbilityType) {
    return false;
}

int32 UHbkPlayerCharacterManager::GetViewerTicketNum() const {
    return 0;
}

AHbkRhythmSign* UHbkPlayerCharacterManager::GetRhythmAssistChara() const {
    return NULL;
}

AHbkPlayerCharacterBase* UHbkPlayerCharacterManager::GetPlayerCharacter(int32 Index) const {
    return NULL;
}

int32 UHbkPlayerCharacterManager::GetMoney(bool bCheckPool) const {
    return 0;
}

void UHbkPlayerCharacterManager::GetJoinedPartnerTypeList(TArray<EHbkPartnerType>& PartnerTypeList) const {
}

FHbkPlayerStateInfo UHbkPlayerCharacterManager::GetHbkPlayerStateInfo() const {
    return FHbkPlayerStateInfo{};
}

FHbkPlayerInventoryInfo UHbkPlayerCharacterManager::GetHbkPlayerInventoryInfo() const {
    return FHbkPlayerInventoryInfo{};
}

AHbkPlayerCharacterBase* UHbkPlayerCharacterManager::GetCurrentPlayerCharacter() const {
    return NULL;
}

AHbkPartnerCharacterBase* UHbkPlayerCharacterManager::GetCurrentPartnerCharacter() const {
    return NULL;
}

int32 UHbkPlayerCharacterManager::GetCircuitNum() const {
    return 0;
}

AActor* UHbkPlayerCharacterManager::GetAimingTargetCharacterForEnemy() const {
    return NULL;
}

void UHbkPlayerCharacterManager::GenerateAnotherPlayerCharacter(bool bIsImmediateControl) {
}

bool UHbkPlayerCharacterManager::ForceCallPartner(EHbkPartnerType PartnerType, AActor* Target, const FGameplayTag& BattleActionTag) {
    return false;
}

void UHbkPlayerCharacterManager::External_ExecutePartnerAction(UObject* WorldContextObject, bool bCancel) {
}

void UHbkPlayerCharacterManager::External_AbortPartnerMiniGame(UObject* WorldContextObject, bool bCancel) {
}

void UHbkPlayerCharacterManager::EndMagnetLine() {
}

void UHbkPlayerCharacterManager::EndGimmickTimer() {
}

void UHbkPlayerCharacterManager::DisablePlayersTick(UObject* WorldContextObject) {
}

void UHbkPlayerCharacterManager::DestroyAnotherPlayerCharacter() {
}

void UHbkPlayerCharacterManager::DebugOpenAllSkills() {
}

void UHbkPlayerCharacterManager::DebugAddInventory(const TArray<FString>& Args) {
}

void UHbkPlayerCharacterManager::Debug_BeginEventBeatHit(UObject* WorldContextObject, EHbkBeatHitType Type) {
}

void UHbkPlayerCharacterManager::ChangeControlToAnotherPlayerCharacter(FTransform NewLocation) {
}

void UHbkPlayerCharacterManager::BeginInGameEventQTE(bool bWithInput, FGameplayTag UITargetAgentTag) {
}

bool UHbkPlayerCharacterManager::BeginGimmickTimer() {
    return false;
}

int32 UHbkPlayerCharacterManager::AddViewerTicketNum(int32 Add) {
    return 0;
}

int32 UHbkPlayerCharacterManager::AddMoney(int32 Add, bool bTakeItem) {
    return 0;
}

int32 UHbkPlayerCharacterManager::AddCircuitNum(int32 Add) {
    return 0;
}


