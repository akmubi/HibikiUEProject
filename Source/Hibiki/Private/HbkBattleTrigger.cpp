#include "HbkBattleTrigger.h"
#include "AkComponent.h"

AHbkBattleTrigger::AHbkBattleTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bExecSave = false;
    this->bSupplyEnemyAdvance = false;
    this->bBattleEnded = false;
    this->AkComp = CreateDefaultSubobject<UAkComponent>(TEXT("Ak"));
    this->BattleStartTask = NULL;
    this->SupplyEnemyTask = NULL;
    this->EnemyDiedTask = NULL;
    this->BattleResultTask = NULL;
    this->ActivateCameraTask = NULL;
    this->DeactivateCameraTask = NULL;
    this->FlickGameEnvStateTask = NULL;
    this->EnemyResetEventTask = NULL;
    this->BattleId = -1;
    this->bCopyBattleIdAndGroupName = false;
    this->EnemySpawnSyncNote = EHbkNote::Note_Quarter;
    this->EnemySpawnSyncCount = 0;
    this->bCopyEnemySupplyParam = false;
    this->bCopySound = false;
}

void AHbkBattleTrigger::SupplyEnemyComplete() {
}

void AHbkBattleTrigger::ReadyToFightBattle() {
}

void AHbkBattleTrigger::PrepareBattle() {
}

void AHbkBattleTrigger::OnCollisionComponentCollisionSettingsChanged(UPrimitiveComponent* ChangedComponent) {
}

void AHbkBattleTrigger::GameEnvStateEnd() {
}

void AHbkBattleTrigger::EnemySupplyCameraDeactivateFinished() {
}

void AHbkBattleTrigger::EnemySupplyCameraActivateFinished() {
}

void AHbkBattleTrigger::EnemyResetEventFinished() {
}

void AHbkBattleTrigger::EnemyDiedSuccess() {
}

void AHbkBattleTrigger::BattleResultEnded() {
}

void AHbkBattleTrigger::BattleEnd() {
}

void AHbkBattleTrigger::BattleBegun() {
}


