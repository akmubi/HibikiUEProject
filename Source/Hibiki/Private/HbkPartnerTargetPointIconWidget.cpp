#include "HbkPartnerTargetPointIconWidget.h"

UHbkPartnerTargetPointIconWidget::UHbkPartnerTargetPointIconWidget() {
    this->Partner = EHbkPartnerType::None;
    this->BaseOverlay = NULL;
    this->GuideAngleOverlay = NULL;
    this->GuideBaseOverlay = NULL;
    this->CircleImg = NULL;
    this->InAnimation = NULL;
    this->LoopAnimation = NULL;
    this->isTaskFinished = false;
    this->isLoop = false;
    this->GuideTriangleAnim = NULL;
    this->SubCircleBase = NULL;
    this->RangeIcon = NULL;
    this->SubCircle = NULL;
    this->GuideEndAnim = NULL;
}

void UHbkPartnerTargetPointIconWidget::Task_PlayLoopAnim(int32 NoteCount, bool bOnBeat) {
}

void UHbkPartnerTargetPointIconWidget::PlayGuideLoopAnim(int32 NoteCount, bool bDownBeat) {
}

bool UHbkPartnerTargetPointIconWidget::PlayAction(EHbkPartnerTargetPointAction PlayAnim, int32 LoopNum, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaySpeed, bool BlockPlaySameAnimation) {
    return false;
}




