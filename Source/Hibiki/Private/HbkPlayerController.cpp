#include "HbkPlayerController.h"
#include "HbkDamageComponent.h"
#include "HbkPlayerAutoActionComponent.h"
#include "HbkPlayerEffectedComponent.h"
#include "HbkPlayerGaugeComponent.h"
#include "HbkPlayerGrowthComponent.h"
#include "HbkPlayerMiniGameComponent.h"
#include "HbkPlayerRDGrowthComponent.h"
#include "HbkPlayerSoundComponent.h"
#include "HbkPlayerSpecialAttackComponent.h"
#include "HbkRhythmSynchroComponent.h"

AHbkPlayerController::AHbkPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->RhythmSynchro = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->HbkDamage = CreateDefaultSubobject<UHbkDamageComponent>(TEXT("HbkDamage"));
    this->PlayerEffected = CreateDefaultSubobject<UHbkPlayerEffectedComponent>(TEXT("PlayerEffected"));
    this->PlayerGauge = CreateDefaultSubobject<UHbkPlayerGaugeComponent>(TEXT("PlayerGauge"));
    this->PlayerGrowth = CreateDefaultSubobject<UHbkPlayerGrowthComponent>(TEXT("HbkPlayerGrowth"));
    this->PlayerSpecialAttack = CreateDefaultSubobject<UHbkPlayerSpecialAttackComponent>(TEXT("HbkPlayerSpecialAttack"));
    this->PlayerAutoAction = CreateDefaultSubobject<UHbkPlayerAutoActionComponent>(TEXT("HbkPlayerAutoAction"));
    this->HbkMiniGame = CreateDefaultSubobject<UHbkPlayerMiniGameComponent>(TEXT("HbkMiniGame"));
    this->PlayerSound = CreateDefaultSubobject<UHbkPlayerSoundComponent>(TEXT("PlayerSound"));
    this->PlayerRDGrowth = CreateDefaultSubobject<UHbkPlayerRDGrowthComponent>(TEXT("HbkPlayerRDGrowth"));
    this->CameraParamDataTable = NULL;
    this->DefaultCameraName = TEXT("NormalCamera");
    this->PartnerDataAsset = NULL;
    this->PlayerMetrics = NULL;
    this->PlayerInheritData = NULL;
}

void AHbkPlayerController::SuspendCameraAutoLockon() {
}

void AHbkPlayerController::StartInterpPos(const FTransform& Goal, bool OverrideAction) {
}

void AHbkPlayerController::StartInterpMove(const FTransform& Goal, float InterpTime, bool SetInputVector, bool StopSlotAnim, bool bGroundCheck) {
}

void AHbkPlayerController::StartEventMove(const FTransform& Goal, float moveSpeed, float InterpTime) {
}

void AHbkPlayerController::StartEventAnimation(const FGameplayTag EventAnimTag) {
}

void AHbkPlayerController::SetPlayerControlMode(EHbkPlayerControlMode NewControlMode) {
}

void AHbkPlayerController::SetOrientRotationToDir(bool Enable) {
}

void AHbkPlayerController::SetInhibitFlag(EHbkPlayerControlFlagOption FlagOption) {
}

void AHbkPlayerController::SetInhibitControl(bool Inhibit) {
}

void AHbkPlayerController::SetEnableLastHit(bool Enable) {
}

void AHbkPlayerController::SetControlSecondAttackOnly(bool Inhibit) {
}

void AHbkPlayerController::SetControlNormalAttackOnly(bool Inhibit) {
}

void AHbkPlayerController::SetControlInteractOnly(bool Inhibit) {
}

void AHbkPlayerController::SetCameraWorldRotationParam(const FRotator& TargetRot, float Duration, float BlendIn, bool InterpYaw, bool InterpPitch, bool ForceRot) {
}

void AHbkPlayerController::SetCameraRotationParam(const FRotator& TargetRot, float Duration, float BlendIn, bool InterpYaw, bool InterpPitch) {
}

void AHbkPlayerController::SetAutoActionPriorityTarget(AActor* PriorityTarget) {
}

void AHbkPlayerController::SetAppendCameraParam(FHbkCameraAppendParam AppendParam, FHbkCameraBlendParam BlendIn, FHbkCameraBlendParam BlendOut, float Duration, int32 Priority) {
}

void AHbkPlayerController::ResumeCameraAutoLockon() {
}

void AHbkPlayerController::ResetPreviousCamera(float BlendTime) {
}

void AHbkPlayerController::ResetPlayerControlMode() {
}

void AHbkPlayerController::ResetDefaultCamera(float BlendTime) {
}

void AHbkPlayerController::ResetCurrentHealth(float HealthRate) {
}

void AHbkPlayerController::ResetCameraRotation(float BlendIn, bool InterpYaw, bool InterpPitch) {
}

void AHbkPlayerController::RecoverReverbGauge(int32 GaugeCount, float RecoverRate) {
}

bool AHbkPlayerController::RecoverHealthWithTag(const FGameplayTag& RecoveryTag, bool bTakeItem) {
    return false;
}

void AHbkPlayerController::Receive_OnReturnedPartner(AHbkPartnerCharacterBase* ReturnedPartner, bool bIsAction) {
}

void AHbkPlayerController::Receive_OnEndBattle() {
}

void AHbkPlayerController::Receive_OnCalledPartner(AHbkPartnerCharacterBase* CalledPartner, bool bIsAction) {
}

void AHbkPlayerController::Receive_OnCalledBeginBattle() {
}

void AHbkPlayerController::Receive_OnBeginBattle() {
}

void AHbkPlayerController::Receive_ChangeHealth(float Value, float PrevValue, float ValueRate) {
}

void AHbkPlayerController::Receive_ActorDied(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkPlayerController::OnSyncPrepare() {
}

void AHbkPlayerController::OnStartInterpPos() {
}

void AHbkPlayerController::OnInterpPosEnd() {
}

void AHbkPlayerController::OnInterpMoveEnd() {
}

void AHbkPlayerController::OnEventMoveEnd() {
}

void AHbkPlayerController::OnCameraParamTableChange() {
}

void AHbkPlayerController::JumpSectionEventAnimation(const FGameplayTag EventAnimTag, FName JumpSectionName, bool bAnimBlend) {
}

bool AHbkPlayerController::IsUsableSpecialAttack() const {
    return false;
}

bool AHbkPlayerController::IsPlayerControlMode(EHbkPlayerControlMode NewControlMode) const {
    return false;
}

bool AHbkPlayerController::IsOtherPlayerControlMode() const {
    return false;
}

bool AHbkPlayerController::IsInhibitControl() const {
    return false;
}

void AHbkPlayerController::Hbk_StopPlayerCameraShake(EHbkPlayerCameraShakeType CameraShakeType) {
}

void AHbkPlayerController::Hbk_StartPlayerCameraShake(EHbkPlayerCameraShakeType CameraShakeType, float Scale) {
}

int32 AHbkPlayerController::GetSpecialAttackCost(const FGameplayTag& SpAttackTag) const {
    return 0;
}

int32 AHbkPlayerController::GetSpecialAttackConsumeGauge() const {
    return 0;
}

UHbkRhythmSynchroComponent* AHbkPlayerController::GetRhythmSynchro() const {
    return NULL;
}

UHbkPlayerMetrics* AHbkPlayerController::GetPlayerMetrics() {
    return NULL;
}

EHbkPlayerControlMode AHbkPlayerController::GetPlayerControlMode() const {
    return EHbkPlayerControlMode::None;
}

AHbkPlayerState* AHbkPlayerController::GetHbkPlayerState() const {
    return NULL;
}

AHbkPlayerCharacterBase* AHbkPlayerController::GetHbkPlayerCharacter() const {
    return NULL;
}

int32 AHbkPlayerController::GetCurrentReverbGaugeMax() const {
    return 0;
}

int32 AHbkPlayerController::GetConsumeReverbGauge(EHbkReverbGaugeConsumeType ConsumeType) const {
    return 0;
}

void AHbkPlayerController::EndLoopEventAnimation() {
}

void AHbkPlayerController::DebugChangeMainCamera(const TArray<FString>& Args) {
}

void AHbkPlayerController::ClearInhibitFlag(EHbkPlayerControlFlagOption FlagOption) {
}

void AHbkPlayerController::ClearAutoActionPriorityTarget(AActor* ClearTarget) {
}

void AHbkPlayerController::ChangeCameraParam(FName CameraName, float BlendTime, bool bDisableFocalPointTrace) {
}

bool AHbkPlayerController::CanAddOverChargeCount() const {
    return false;
}

FVector2D AHbkPlayerController::CalcScreenLocationFromCenter(const FVector2D& ScreenLocation) {
    return FVector2D{};
}








bool AHbkPlayerController::AddOverChargeStockMax() {
    return false;
}

bool AHbkPlayerController::AddOverChargeCount() {
    return false;
}

void AHbkPlayerController::AccumulateReverbGaugeWithTag(const FGameplayTag& RecoveryTag, bool bTakeItem) {
}


