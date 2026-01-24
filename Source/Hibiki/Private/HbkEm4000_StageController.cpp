#include "HbkEm4000_StageController.h"

AHbkEm4000_StageController::AHbkEm4000_StageController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->MoveBasePoint = NULL;
    this->KorsicaVersusCamera = NULL;
    this->KorsicaVersusDieCamera = NULL;
    this->KorsicaVersusTalkCamera = NULL;
    this->KorsicaAttackBasePoint = NULL;
    this->LightChangeSE = NULL;
    this->Attack = 0;
    this->isCircleMove = false;
    this->isExecDieCamera = false;
    this->isPermitStartAnimCamera = false;
    this->CircleMoveRate = 1.00f;
}

void AHbkEm4000_StageController::SuppressPlayerInput(bool IsSuppress) {
}

void AHbkEm4000_StageController::StartAnimCameraCheckPermit() {
}

void AHbkEm4000_StageController::SetKorsicaBattleResultType() {
}

void AHbkEm4000_StageController::SetFightHudVisible(bool bVisible) {
}

void AHbkEm4000_StageController::Receive_OnRhythmDodgeStart(const FEnemyRhythmDodgePlayerActionInfo& PlayerDodgeActionInfo) {
}

void AHbkEm4000_StageController::Receive_KorsicaCircleMove(bool bIsCircleMove, UAnimSequenceBase* PlayerAction, float PlayRate) {
}

void AHbkEm4000_StageController::InitEventBasePoint() {
}

float AHbkEm4000_StageController::GetRhythmParrySuccessRatio() {
    return 0.0f;
}

void AHbkEm4000_StageController::EntryEvPoint() {
}

void AHbkEm4000_StageController::CheckRhythmParrySuccessRate() {
}

void AHbkEm4000_StageController::AddjustKorsicaPos() {
}


