#include "HbkTalkDataRow.h"

FHbkTalkDataRow::FHbkTalkDataRow() {
    this->TalkCmd = EHbkTalkCmdType::TCMD_None;
    this->TalkVoice = NULL;
    this->FaceFXAnim = NULL;
    this->FaceIcon = EHbkTalkFaceType::TFACE_None;
    this->Emotion = EHbkTalkEmotionType::TEMO_Normal;
    this->SyncNote = EHbkNote::None;
    this->Step = EHbkTalkStepType::Next;
    this->TimeToStep = 0.00f;
    this->TextStyle = EHbkTalkTextStyle::Balloon;
    this->DisableLineSkip = false;
    this->TalkAnim = NULL;
    this->MusicEvent = NULL;
}

