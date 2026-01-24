#include "HbkOptionSettingLatencyCheckWidget.h"

UHbkOptionSettingLatencyCheckWidget::UHbkOptionSettingLatencyCheckWidget() {
    this->LatencyCheckMusic = NULL;
    this->TitleMusic = NULL;
    this->OptionMusic = NULL;
    this->ChangeValueSound = NULL;
    this->MinPos = 0.00f;
    this->MaxPos = 0.00f;
    this->AdjustmentArea = NULL;
    this->Text_Messege = NULL;
    this->Nort_Anim = NULL;
    this->Cat_Hit_Anim = NULL;
    this->LateThresholdTime = 0.00f;
    this->MoveButtonIconArea = NULL;
    this->MoveButtonIconAreaKeyboardMouse = NULL;
}

void UHbkOptionSettingLatencyCheckWidget::OnNoteSyncWhole(int32 NoteCount, bool bDownBeat) {
}

void UHbkOptionSettingLatencyCheckWidget::OnNoteSyncQuarter(int32 NoteCount, bool bDownBeat) {
}

void UHbkOptionSettingLatencyCheckWidget::OnNoteSyncHalf(int32 NoteCount, bool bDownBeat) {
}

void UHbkOptionSettingLatencyCheckWidget::OnLatestFollowDeviceChanged(EHbkHUDFollowDevice LatestDeviceType) {
}


