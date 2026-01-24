#include "HbkEm7500_StageController.h"

AHbkEm7500_StageController::AHbkEm7500_StageController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->HUDPresetType = EHbkEm7500HUDPreset::Default;
    this->HUDPreset_RhythmParry = NULL;
    this->IsFirst808QTE = true;
    this->DebugBehaviorTree = NULL;
    this->MultiSlashExecBeat = 1;
    this->ArmWhipAnim = NULL;
}

void AHbkEm7500_StageController::SetHUDPreset(EHbkEm7500HUDPreset Type) {
}

void AHbkEm7500_StageController::SetEndFinishCamera(bool Enable) {
}

void AHbkEm7500_StageController::SetBossIdleState() {
}

void AHbkEm7500_StageController::SetBossArmTickAndVisible(bool IsEnable) {
}

void AHbkEm7500_StageController::OnPlayerDamage(float Value, float PrevValue, float ValueRate) {
}

void AHbkEm7500_StageController::OnKaleDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkEm7500_StageController::OnInteract808QTE(AActor* Interactor) {
}

void AHbkEm7500_StageController::OnEnd808QTE() {
}

void AHbkEm7500_StageController::OnDynamicSpawnedBoss() {
}

void AHbkEm7500_StageController::IncrementClearAllStage() {
}

void AHbkEm7500_StageController::HitCheckEscapeDirection(float CheckLength, EKaleMoveDirection& OutCheckDirection, bool bIsDebugDraw) const {
}

AActor* AHbkEm7500_StageController::GetThunderDragonLocationActor() {
    return NULL;
}

AActor* AHbkEm7500_StageController::GetRotateEnergyAttack808LocationActor() {
    return NULL;
}

AActor* AHbkEm7500_StageController::GetOverdriveLaserLocationActor() {
    return NULL;
}

TArray<TEnumAsByte<EObjectTypeQuery>> AHbkEm7500_StageController::GetObjectTypeQuerysForWall() const {
    return TArray<TEnumAsByte<EObjectTypeQuery>>();
}

TArray<TEnumAsByte<EObjectTypeQuery>> AHbkEm7500_StageController::GetObjectTypeQuerys() const {
    return TArray<TEnumAsByte<EObjectTypeQuery>>();
}

int32 AHbkEm7500_StageController::GetLastRemainArmNum() {
    return 0;
}

float AHbkEm7500_StageController::GetCheckDistanceValue(EHbkEm7500CheckDistanceType Type) {
    return 0.0f;
}

AActor* AHbkEm7500_StageController::FindThunderDragonLocationActor() {
    return NULL;
}

void AHbkEm7500_StageController::CallForceEndSPAndJam() {
}







void AHbkEm7500_StageController::AdjustLocationForRhythmParry(EHbkEm7500RhythmParryType Type) {
}


