#include "HbkTrainingRoomController.h"

AHbkTrainingRoomController::AHbkTrainingRoomController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerStartActor = NULL;
    this->InitializeDelayTime = 0.01f;
    this->TrainingRoomDataAsset = NULL;
    this->EnemyAIChangeDelayTime = 0.00f;
    this->RecoverReverbCheckTime = 5.00f;
    this->RecoverHealthCheckTime = 3.00f;
    this->AkEvent_BaseMusic = NULL;
    this->AkEvent_MusicState_Default = NULL;
    this->AkEvent_MusicState_Fast = NULL;
    this->MusicStateFastEnableStageNum = 4;
    this->AkEvent_GotoHideOut = NULL;
    this->AkEvent_RestoreVolumeGotoHideOut = NULL;
    this->AkEvent_StartTraining = NULL;
    this->AkEvent_RestoreVolumeStartTraining = NULL;
    this->TrainingRoomWidgetClass = NULL;
    this->MenuWidget = NULL;
    this->PracticeInfoWidgetClass = NULL;
    this->PracticeInfoWidget = NULL;
    this->SpawnedEnemy = NULL;
    this->EnemyRespawnInterval = 1.00f;
}

void AHbkTrainingRoomController::SetMusicState(bool bFast) {
}

void AHbkTrainingRoomController::SetEnableViewRhythmAssist(bool bEnable) {
}

void AHbkTrainingRoomController::SetEnableViewLife(bool bEnable) {
}

void AHbkTrainingRoomController::SetEnableUnDeadEnemy(bool bEnable) {
}

void AHbkTrainingRoomController::SetEnableRecoveryReverb(bool bEnable) {
}

void AHbkTrainingRoomController::SetEnableEnemyAI(bool bEnable) {
}

void AHbkTrainingRoomController::PressReset() {
}

void AHbkTrainingRoomController::PressKeyOption() {
}

void AHbkTrainingRoomController::PressCancel() {
}

void AHbkTrainingRoomController::OnRhythmDodgeTrigger() {
}

void AHbkTrainingRoomController::OnPlayerHealthDamage(float Value) {
}

void AHbkTrainingRoomController::OnParrySuccessPerfect() {
}

void AHbkTrainingRoomController::OnParrySuccess() {
}

void AHbkTrainingRoomController::OnMagnetReached(AHbkPlayerCharacterBase* Player, UHbkMagneticPointComponent* MagneticPoint) {
}

void AHbkTrainingRoomController::OnMagnetBackStab(AHbkPlayerCharacterBase* Player, UHbkMagneticPointComponent* MagneticPoint) {
}

void AHbkTrainingRoomController::OnGotoHideOutTiming() {
}

void AHbkTrainingRoomController::OnEnemyEndDrain(AHbkEnemyCharacter* DrainPawn) {
}

void AHbkTrainingRoomController::OnEnemyDestroy() {
}

void AHbkTrainingRoomController::OnDynamicSpawnedEnemy(AHbkEnemyCharacter* DynamicSpawnEnemy) {
}

void AHbkTrainingRoomController::OnDodgeStart() {
}

void AHbkTrainingRoomController::OnDirectionalParrySuccess() {
}

void AHbkTrainingRoomController::OnConsumePlayerReverbGauge(EHbkReverbGaugeConsumeType ConsumeType) {
}

void AHbkTrainingRoomController::OnBeginPartnerChargeAttack(EHbkPartnerType PartnerType, EHbkPartnerAttackType AttackType) {
}

void AHbkTrainingRoomController::OnBeginPartnerAttack(EHbkPartnerType PartnerType, EHbkPartnerAttackType AttackType) {
}

void AHbkTrainingRoomController::OnAttackAnimStart(const FGameplayTag& AttackTag, int32 ComboCount) {
}

void AHbkTrainingRoomController::OnAirParrySuccess() {
}

bool AHbkTrainingRoomController::GetMusicStateFast() const {
    return false;
}

bool AHbkTrainingRoomController::GetEnemyAIState() const {
    return false;
}

bool AHbkTrainingRoomController::GetEnableViewLife() const {
    return false;
}

bool AHbkTrainingRoomController::GetEnableUnDeadEnemy() const {
    return false;
}

bool AHbkTrainingRoomController::GetEnableRecoveryReverb() const {
    return false;
}

EHbkEnemyCategoryType AHbkTrainingRoomController::GetCurrentEnemyCategory() const {
    return EHbkEnemyCategoryType::None;
}


