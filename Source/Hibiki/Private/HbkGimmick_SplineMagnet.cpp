#include "HbkGimmick_SplineMagnet.h"

AHbkGimmick_SplineMagnet::AHbkGimmick_SplineMagnet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->moveType = EHbkGimmick_SplineMagnetMoveType::Once;
    this->bSplineEndToMatchSyncNote = false;
    this->SplineEndToMatchSyncNoteDelay = 0;
    this->RailEndType = EHbkGimmick_SplineMagnetRailEndType::None;
    this->RailStartAnim = NULL;
    this->RailStartRightAnim = NULL;
    this->RailStartLeftAnim = NULL;
    this->RailEndAnim = NULL;
    this->ShortRailEndAnim = NULL;
    this->RailEndSt04EscapeToEVAnim = NULL;
    this->SwingLAnim = NULL;
    this->SwingRAnim = NULL;
    this->QTESuccessAnim = NULL;
    this->QTESuccessAnim_ForEnemy = NULL;
    this->DamageAnim = NULL;
    this->DieAnim = NULL;
    this->PlaySeRef = NULL;
    this->StopSeRef = NULL;
    this->VfxRef = NULL;
    this->AvoidJustVfxRef = NULL;
    this->VfxExtIntRef = NULL;
    this->bDummy = false;
    this->bExecSave = false;
    this->bMagnetActive = false;
    this->bEndPoint = false;
}

void AHbkGimmick_SplineMagnet::OnMagnetRelease(AHbkPlayerCharacterBase* Player, UHbkMagneticPointComponent* Magnet) {
}

void AHbkGimmick_SplineMagnet::OnMagnetReached(AHbkPlayerCharacterBase* Player, UHbkMagneticPointComponent* Magnet) {
}

void AHbkGimmick_SplineMagnet::OnMagnetRailStart() {
}

void AHbkGimmick_SplineMagnet::OnMagnetRailAnimSwingR(float PlayRate) {
}

void AHbkGimmick_SplineMagnet::OnMagnetRailAnimSwingL(float PlayRate) {
}

void AHbkGimmick_SplineMagnet::OnMagnetRailAnimRailStart(int32 AnimIndex, float PlayRate) {
}

void AHbkGimmick_SplineMagnet::OnMagnetRailAnimRailEnd(float PlayRate) {
}

void AHbkGimmick_SplineMagnet::OnMagnetRailAnimQTE_ForEnemy(float PlayRate) {
}

void AHbkGimmick_SplineMagnet::OnMagnetRailAnimQTE(float PlayRate) {
}

void AHbkGimmick_SplineMagnet::OnMagnetRailAnimDie(float PlayRate) {
}

void AHbkGimmick_SplineMagnet::OnMagnetRailAnimDamage(float PlayRate) {
}

void AHbkGimmick_SplineMagnet::OnMagnetHit(AHbkPlayerCharacterBase* Player, UHbkMagneticPointComponent* Magnet) {
}

void AHbkGimmick_SplineMagnet::MagnetCollisionEnabled(int32 NoteCount, bool bOnBeat) {
}

bool AHbkGimmick_SplineMagnet::IsIdle() const {
    return false;
}

void AHbkGimmick_SplineMagnet::ForceDetachFromMagnet() {
}

void AHbkGimmick_SplineMagnet::DetachFromMagnet() {
}

void AHbkGimmick_SplineMagnet::BeginMoveSpline(int32 NoteCount, bool bOnBeat) {
}


