#include "HbkEm7500_RhythmParryControl.h"

AHbkEm7500_RhythmParryControl::AHbkEm7500_RhythmParryControl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageType = NULL;
    this->bIsPlayToTheEndPhase1 = false;
    this->bIsPlayToTheEndPhase3 = false;
}

void AHbkEm7500_RhythmParryControl::SetStageController(AHbkEm7500_StageController* Controller) {
}

void AHbkEm7500_RhythmParryControl::SetEndFinishCamera(bool Enable) {
}

void AHbkEm7500_RhythmParryControl::SetBossActor(AHbkEm7500_Kale* Actor) {
}

void AHbkEm7500_RhythmParryControl::OnEndAttackNotice(AHbkEnemyCharacter* Attacker, FBossRhythmAttackParam RhythmAttackParam) {
}

bool AHbkEm7500_RhythmParryControl::IsSucceed() const {
    return false;
}

bool AHbkEm7500_RhythmParryControl::IsRunning() const {
    return false;
}

void AHbkEm7500_RhythmParryControl::InitializeRhythmParry(EHbkEm7500RhythmParryType Type) {
}

void AHbkEm7500_RhythmParryControl::AbortRhythmParry() {
}


