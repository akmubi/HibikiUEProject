#include "HbkEm1000_AIController.h"

AHbkEm1000_AIController::AHbkEm1000_AIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AHbkEm1000_AIController::SetNextAttackBeatCount(int32 Count) {
}

void AHbkEm1000_AIController::SetGuitarRiffAttackReady(bool Flag) {
}

void AHbkEm1000_AIController::SetGuitarRiffAttackExec(bool Flag) {
}

void AHbkEm1000_AIController::OnSyncMusicAttack1(int32 CallCount) {
}

void AHbkEm1000_AIController::OnChangePhase(int32 PhaseNum) {
}

void AHbkEm1000_AIController::OnBeatEvent(int32 NoteCount) {
}

void AHbkEm1000_AIController::OnBarEvent(int32 BarCount) {
}

bool AHbkEm1000_AIController::IsMoving() const {
    return false;
}

bool AHbkEm1000_AIController::GetTryGuitarRiffAttack() const {
    return false;
}

bool AHbkEm1000_AIController::GetGuitarRiffAttackReady() {
    return false;
}

bool AHbkEm1000_AIController::GetGuitarRiffAttackExec() {
    return false;
}

void AHbkEm1000_AIController::DoesMove() {
}

bool AHbkEm1000_AIController::CanMove() const {
    return false;
}



void AHbkEm1000_AIController::AddNextAttackBeatCount(int32 Count) {
}


