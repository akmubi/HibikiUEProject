#include "HbkEm0300_HeavyGunnerG.h"

AHbkEm0300_HeavyGunnerG::AHbkEm0300_HeavyGunnerG(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsRotationUpperBody = false;
    this->RotationUpperBodySpeed = 100.00f;
    this->InsightVal = 15.00f;
    this->DamagedUpperBodyRotSpeed = 300.00f;
    this->bIsPlayingShootingAnim = false;
    this->bIsAirShooting = false;
    this->PlayingShootingMontageIndex = 0;
    this->CalcShootingAimYaw = 0.00f;
    this->CalcShootingAimPitch = 0.00f;
    this->bIsPlayingDamageReaction = false;
    this->FallingAnim = NULL;
}

void AHbkEm0300_HeavyGunnerG::StartFallArea() {
}

void AHbkEm0300_HeavyGunnerG::StartFall(float MaxGravityScale, float LerpTime) {
}

void AHbkEm0300_HeavyGunnerG::ShieldInvincible() {
}

void AHbkEm0300_HeavyGunnerG::SetTargetIsActorFlag(bool TargetIsActorFlag) {
}

void AHbkEm0300_HeavyGunnerG::SetSuspensionInsightVal(float NewInsightVal) {
}

void AHbkEm0300_HeavyGunnerG::SetShootingMontageIndex(int32 idx) {
}

void AHbkEm0300_HeavyGunnerG::SetRotTargetLocation(FVector TargetLocation) {
}

void AHbkEm0300_HeavyGunnerG::SetRotationUpperBodySpeed(float NewSpeed) {
}

void AHbkEm0300_HeavyGunnerG::SetRotationUpperBodyFlag(bool isRotationUpperBody) {
}

void AHbkEm0300_HeavyGunnerG::SetIsPlayingShootingAnim(bool isPlayingAnim) {
}

void AHbkEm0300_HeavyGunnerG::SetFinalYawUpperBody(float FinYaw) {
}

void AHbkEm0300_HeavyGunnerG::SetCurrentYawUpperBody(float CurrentYaw) {
}

void AHbkEm0300_HeavyGunnerG::SetCalcShootingAimtYaw(float NewYaw) {
}

void AHbkEm0300_HeavyGunnerG::SetCalcShootingAimtPitch(float NewPitch) {
}

void AHbkEm0300_HeavyGunnerG::SetAirShooting(bool isAirShooting) {
}

void AHbkEm0300_HeavyGunnerG::ResetLaunchCount() {
}

void AHbkEm0300_HeavyGunnerG::Notify_PlayDamageAnimation(UHbkCharacterAnimInstance* AnimInstance, float PlayRate) {
}


bool AHbkEm0300_HeavyGunnerG::HideBreakShieldParts(const TArray<FName>& HideBoneNameList, TEnumAsByte<EPhysBodyOp> PhysicsBodyOption) {
    return false;
}

bool AHbkEm0300_HeavyGunnerG::GetTargetIsActorFlag() const {
    return false;
}

float AHbkEm0300_HeavyGunnerG::GetSuspensionInsightVal() const {
    return 0.0f;
}

int32 AHbkEm0300_HeavyGunnerG::GetShootingMontageIndex() const {
    return 0;
}

FVector AHbkEm0300_HeavyGunnerG::GetRotTargetLocation() const {
    return FVector{};
}

AActor* AHbkEm0300_HeavyGunnerG::GetRotTargetActor() const {
    return NULL;
}

float AHbkEm0300_HeavyGunnerG::GetRotationUpperBodySpeed() const {
    return 0.0f;
}

bool AHbkEm0300_HeavyGunnerG::GetRotationUpperBodyFlag() const {
    return false;
}

int32 AHbkEm0300_HeavyGunnerG::GetLaunchCount() const {
    return 0;
}

bool AHbkEm0300_HeavyGunnerG::GetIsPlayingShootingAnim() const {
    return false;
}

float AHbkEm0300_HeavyGunnerG::GetFinalYawUpperBody() const {
    return 0.0f;
}

float AHbkEm0300_HeavyGunnerG::GetCurrentYawUpperBody() const {
    return 0.0f;
}

float AHbkEm0300_HeavyGunnerG::GetCalcShootingYaw() const {
    return 0.0f;
}

float AHbkEm0300_HeavyGunnerG::GetCalcShootingPitch() const {
    return 0.0f;
}

bool AHbkEm0300_HeavyGunnerG::GetAirShooting() const {
    return false;
}

void AHbkEm0300_HeavyGunnerG::ChallengeDamageBlock(AActor* DamageCauser, const UDamageType* DamageType, float DamageValue) {
}

float AHbkEm0300_HeavyGunnerG::CalcAngleYawWithTheTargetPM(const AActor* TargetActor) {
    return 0.0f;
}

float AHbkEm0300_HeavyGunnerG::CalcAngleWithTheTarget(const AActor* TargetActor) {
    return 0.0f;
}

float AHbkEm0300_HeavyGunnerG::CalcAngleWithTheLocation(const FVector& AtLocation) {
    return 0.0f;
}

float AHbkEm0300_HeavyGunnerG::CalcAnglePitchWithTheTarget(const AActor* TargetActor) {
    return 0.0f;
}

bool AHbkEm0300_HeavyGunnerG::BreakShieldParts(const TArray<FName>& BreakBoneNameList) {
    return false;
}

bool AHbkEm0300_HeavyGunnerG::BreakAndHideShieldParts(const TMap<FName, bool>& BreakBoneList, TEnumAsByte<EPhysBodyOp> PhysicsBodyOption) {
    return false;
}

void AHbkEm0300_HeavyGunnerG::AddLaunchCount() {
}


