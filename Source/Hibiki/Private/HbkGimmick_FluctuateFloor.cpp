#include "HbkGimmick_FluctuateFloor.h"

AHbkGimmick_FluctuateFloor::AHbkGimmick_FluctuateFloor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->moveType = EHbkGimmick_FluctuateFloorMoveType::Loop;
    this->BeginIntervalNote = 0;
    this->FirstSignNote = 2;
    this->bUseMagmaFloorAnim = false;
    this->TraceChannel = TraceTypeQuery1;
    this->FloorMeshHeight = 0.00f;
    this->MovingMeshHeight = 0.00f;
    this->bUseUpMovingMeshHeight = false;
    this->UpMovingMeshHeight = 0.00f;
    this->EnableAttackDistance = 1000.00f;
    this->AttackRadiusOverride = -1.00f;
    this->ImproveHeightAdjust = 0.00f;
    this->bDisableAttackWhileWait = true;
    this->bEnableAttackEveryTime = false;
    this->EnableAttackEveryTimeScale = 1.00f;
    this->bAttackOnce = false;
    this->bIgnoreActivateOperateObject = false;
    this->RestartEventType = EHbkRestartEventType::Normal;
    this->DamageType = NULL;
    this->bSeAttachFloor = true;
    this->DefaultAudioStateRef = NULL;
    this->ChangeAudioStateHeight = 5000.00f;
    this->bActive = false;
    this->bChangeAudioStateEnd = false;
}

void AHbkGimmick_FluctuateFloor::OnRestartCollisionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHbkGimmick_FluctuateFloor::OnNoteSync8thEvent(int32 NoteCount, bool bOnBeat) {
}

void AHbkGimmick_FluctuateFloor::OnBoneTransformsFinalized() {
}

bool AHbkGimmick_FluctuateFloor::GetUseMagmaFloorAnim() {
    return false;
}

int32 AHbkGimmick_FluctuateFloor::GetUseAssetIndex() {
    return 0;
}

float AHbkGimmick_FluctuateFloor::GetBlendAlpha() {
    return 0.0f;
}

float AHbkGimmick_FluctuateFloor::GetAnimPlayRate() {
    return 0.0f;
}


