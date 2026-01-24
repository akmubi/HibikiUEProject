#include "HbkEm2000_StageController.h"

AHbkEm2000_StageController::AHbkEm2000_StageController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bIsDebugDoNotPlayCS = false;
    this->bIsActivateBasicFirework = false;
    this->bIsBasicFireworkWithTimer = false;
    this->BasicFireworkTimer = 0.00f;
}

void AHbkEm2000_StageController::SetBridgeBreakdownModeForPlayer(bool Enable) {
}

void AHbkEm2000_StageController::SetActiveVFX_Discarge(bool Activate) {
}

void AHbkEm2000_StageController::SetActiveVFX_CableRupture(bool Activate) {
}

void AHbkEm2000_StageController::SetActiveVFX_BasicFireworkWithTimer(EHbkNote NoteType, float NoteCount) {
}

void AHbkEm2000_StageController::SetActiveVFX_BasicFirework(bool Activate) {
}

void AHbkEm2000_StageController::SetActiveStageMagnet(bool Active) {
}

void AHbkEm2000_StageController::SetActiveEmitterDischarge(bool Active) {
}

void AHbkEm2000_StageController::OnOwnerAttackImpact(const AHbkCharacter* Attacker) {
}

void AHbkEm2000_StageController::OnDynamicSpawnedBoss() {
}

bool AHbkEm2000_StageController::IsValidPipeEquipPoint() const {
    return false;
}

bool AHbkEm2000_StageController::IsValidChargePointPoint() const {
    return false;
}

AHbkEm2000_PipeEquipPoint* AHbkEm2000_StageController::GetPipeEquipPoint() const {
    return NULL;
}

AHbkEm2000_ChargePoint* AHbkEm2000_StageController::GetChargePoint() const {
    return NULL;
}

int32 AHbkEm2000_StageController::GetBreakDownStandPointIndexCloseToPlayer() const {
    return 0;
}

AHbkEm2000_BreakDownStandPoint* AHbkEm2000_StageController::GetBreakdownStandPoint(int32 Index) const {
    return NULL;
}





