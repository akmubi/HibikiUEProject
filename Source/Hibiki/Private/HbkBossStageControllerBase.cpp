#include "HbkBossStageControllerBase.h"

AHbkBossStageControllerBase::AHbkBossStageControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->IsManualCameraChange = false;
    this->IsBossBattlePlaying = false;
    this->Phase = 0;
    this->ContinueCount = 0;
    this->AdjustParamAsset = NULL;
    this->AdjustParamAsset_RT = NULL;
    this->AdjustTakeDamageScaleAsset = NULL;
    this->DefaultSessionEvent = NULL;
    this->DefaultStopEvent = NULL;
    this->RhythmTowerSessionEvent = NULL;
    this->bIsRegisterAudio = false;
    this->bIsOnlinePresenceSetuped = false;
    this->bIsInvincibleAlreadySetForPlayer = false;
    this->bIsActiveDelaySlow = false;
    this->WaitNoteTypeFromCP = EHbkNote::Note_Whole;
    this->WaitNoteCountFromCP = 1;
    this->GameDifficulty = EHbkDifficultyType::Normal;
}

bool AHbkBossStageControllerBase::SpawnBoss() {
    return false;
}

void AHbkBossStageControllerBase::SetGameDifficulty(EHbkDifficultyType Difficulty) {
}

void AHbkBossStageControllerBase::RestoreObjectsByPhase() {
}

bool AHbkBossStageControllerBase::ReflectChangePhase() {
    return false;
}

void AHbkBossStageControllerBase::Receive_OnStateChange(int32 PhaseIndex) {
}

void AHbkBossStageControllerBase::Receive_OnStartGameOver() {
}

void AHbkBossStageControllerBase::PlayMusicState(UAkAudioEvent* DefaultStateEvent, UAkAudioEvent* RhythmTowerStateEvent, UAkAudioEvent* StreamerStateEvent) {
}

bool AHbkBossStageControllerBase::IsRhythmTower() {
    return false;
}

bool AHbkBossStageControllerBase::IsInited() {
    return false;
}

void AHbkBossStageControllerBase::InitBossBattleDieCount() {
}

EHbkDifficultyType AHbkBossStageControllerBase::GetGameDifficulty() {
    return EHbkDifficultyType::Easy;
}

int32 AHbkBossStageControllerBase::GetBossBattleDieCount() {
    return 0;
}

AHbkBossCharacterBase* AHbkBossStageControllerBase::GetBoss() const {
    return NULL;
}

float AHbkBossStageControllerBase::GetAdjustTakeToughDamageScale(const UDamageType* DamageType) const {
    return 0.0f;
}

float AHbkBossStageControllerBase::GetAdjustTakeShieldDamageScale(const UDamageType* DamageType) const {
    return 0.0f;
}

float AHbkBossStageControllerBase::GetAdjustTakeDamageScale(const UDamageType* DamageType) const {
    return 0.0f;
}

float AHbkBossStageControllerBase::GetAdjustTakeBarrierDamageScale(const UDamageType* DamageType) const {
    return 0.0f;
}

float AHbkBossStageControllerBase::GetAdjustHealth(float OriginalHealth, int32 StateIndex, EHbkDifficultyType Difficulty) {
    return 0.0f;
}

float AHbkBossStageControllerBase::GetAdjustGiveDamageRate(FGameplayTagContainer& DamageTag, int32 StateIndex, EHbkDifficultyType Difficulty) {
    return 0.0f;
}

void AHbkBossStageControllerBase::ExecObjectsChange(int32 PhaseIndex, bool IsPreChange) {
}

void AHbkBossStageControllerBase::ExecFreeObjectsChange(FName Name) {
}

void AHbkBossStageControllerBase::ExecCameraChange() {
}


void AHbkBossStageControllerBase::ActiveObjectChange(FHbkBossControlGimmick& ControlGimmick) {
}


