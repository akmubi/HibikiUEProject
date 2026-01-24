#include "HbkPlayLvSeqOption.h"

UHbkPlayLvSeqOption::UHbkPlayLvSeqOption() {
    this->bHideIngamePlayer = true;
    this->UseActorBind = EHbkActorBindingMethod::None;
    this->BlendOutAnimTime = 0.00f;
    this->WaterMarkWidgetClass = NULL;
    this->SourceBPM = 120.00f;
    this->bUseAutoShowBoundActors = false;
    this->bUseFinalCameraDirection = false;
    this->bBlendOutToIngameCamera = false;
    this->bOverwriteEnableSkipToEnd = false;
    this->OutroFramePos = 0;
    this->OutroBarCounts = 0;
    this->OutroCalcBPM = 0.00f;
    this->bDisableRhythmSyncSkip = false;
    this->bRhythmTowerSkipOption = false;
    this->bUseWaterMark = false;
    this->bUseVariableRate = false;
    this->bRhythmSyncStart = false;
    this->RhythmSyncWidgetClass = NULL;
    this->RhythmSyncStartInTransition = EHbkTalkScreenTransition::None;
    this->RhythmSyncStartInTransitionNoteType = EHbkNote::None;
    this->bUseRhythmSyncStartUI = false;
    this->bUseRhythmSyncStartInTransition = false;
    this->bUseOutroBarCounts = false;
    this->bUseEnableSkipToEnd = false;
    this->bUseRSRkipType = false;
    this->bConstrainAspectRatio = false;
    this->bSweepTalkSession = false;
    this->bSweepTalkFreeSession = false;
    this->bSweepFullScreenMovie = false;
    this->bDisableChangeDrawWidgetType = false;
}


