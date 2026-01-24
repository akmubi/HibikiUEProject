#include "HbkGimmick_bg0031.h"

AHbkGimmick_bg0031::AHbkGimmick_bg0031(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SyncNote = EHbkNote::None;
    this->bStartPressUp = false;
    this->bEndPressUp = false;
    this->bPressMachineUp = false;
    this->bBarSyncEnable = true;
    this->DelayBarCount = 0;
    this->AutoActivate = false;
    this->UpIdle = 0;
    this->DownIdle = 0;
    this->DelayNoteCount = 0;
    this->PressDownNoteA = 0;
    this->PressUpNote = 0;
    this->PressDownNoteB = 0;
    this->DownStayNoteCount = 0;
    this->IntensityMax = 1.00f;
    this->IntensityMin = 0.00f;
    this->bType00Enabled = false;
    this->bType01Enabled = false;
    this->bType02Enabled = false;
    this->DamageType = NULL;
}

void AHbkGimmick_bg0031::SyncUpdate8or16(const int32 NoteCount, bool bOnBeat) {
}

void AHbkGimmick_bg0031::SyncUpdate(const int32 NoteCount) {
}

void AHbkGimmick_bg0031::StopSyncGimmick() {
}

void AHbkGimmick_bg0031::StartSyncGimmick() {
}

void AHbkGimmick_bg0031::SetSyncRSSystem(int32 NoteCount) {
}

void AHbkGimmick_bg0031::SetSyncParameter(bool bSyncBar, int32 DelayBar) {
}

bool AHbkGimmick_bg0031::IsPressMachineUp() {
    return false;
}

EHbkNote AHbkGimmick_bg0031::GetNoteType() {
    return EHbkNote::None;
}

bool AHbkGimmick_bg0031::GetInitPressStateIsUp() {
    return false;
}

float AHbkGimmick_bg0031::GetDamageValueFromDamageType() {
    return 0.0f;
}



