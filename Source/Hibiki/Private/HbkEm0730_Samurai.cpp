#include "HbkEm0730_Samurai.h"

AHbkEm0730_Samurai::AHbkEm0730_Samurai(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BladeLineEffect = NULL;
    this->HaikuUIClass = NULL;
    this->pHaikuUI = NULL;
    this->TipsTalkRow = TEXT("ST05_0950_0010");
    this->LaunchedBladeMoveLength = 2000.00f;
    this->LaunchedBladeAkComp = NULL;
    this->bIsTwinBladeMode = false;
    this->GuardDisableTimer = -1.00f;
    this->GuardCounterDistance = 500.00f;
    this->ContinuousRepelledCount = 0;
    this->bIsLastImpact = false;
    this->AngerAttackCount = 0;
    this->PerfectParryAnimLow = NULL;
    this->PerfectParryAnimHigh = NULL;
    this->HealthTriggerCounterAnim = NULL;
    this->HealthTriggerCounterShortAnim = NULL;
    this->SecondTriggerHealth = 0.20f;
}

void AHbkEm0730_Samurai::TipsTalkEnd(const FHbkTalkContext TalkContext) {
}

void AHbkEm0730_Samurai::StartScreenTransition(EHbkTalkScreenTransition TransitionType) {
}

void AHbkEm0730_Samurai::StartBladeLineEffect() {
}

void AHbkEm0730_Samurai::SetTwinBladeMode(bool NewEnable) {
}

void AHbkEm0730_Samurai::SetPerfectGuardDisableTime(float DisableTime) {
}


void AHbkEm0730_Samurai::ResetContinuousRepelledCount() {
}

void AHbkEm0730_Samurai::Receive_OnToughDeactivate() {
}

void AHbkEm0730_Samurai::Receive_OnHealthTriggered(AHbkEnemyCharacter* EnemyPawn, float TriggerHealthRate) {
}

bool AHbkEm0730_Samurai::IsTwinBladeMode() const {
    return false;
}

bool AHbkEm0730_Samurai::IsPerfectGuardEnable() const {
    return false;
}

bool AHbkEm0730_Samurai::IsLastImpact() const {
    return false;
}

bool AHbkEm0730_Samurai::IsContinuousRepelledSuccessed() const {
    return false;
}

bool AHbkEm0730_Samurai::IsAngeredWithCameraInStage() const {
    return false;
}

bool AHbkEm0730_Samurai::IsAngered() const {
    return false;
}

bool AHbkEm0730_Samurai::IsAngerAttackCountFull() const {
    return false;
}

float AHbkEm0730_Samurai::GetGuardCounterDistance() const {
    return 0.0f;
}

void AHbkEm0730_Samurai::ClearAttackEffects(AHbkEnemyCharacter* EmPawn, AHbkEnemyAIController* EmAI) {
}

void AHbkEm0730_Samurai::AddAngerAttackCount() {
}


