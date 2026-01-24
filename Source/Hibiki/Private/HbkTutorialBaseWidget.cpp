#include "HbkTutorialBaseWidget.h"

UHbkTutorialBaseWidget::UHbkTutorialBaseWidget() {
    this->MiddleSize_TalkYPos_Offset = 0.00f;
    this->BtnBase_Right = NULL;
    this->BtnBase_Left = NULL;
    this->ImgTutorialArea = NULL;
    this->MovieTutorialArea = NULL;
    this->MiddleSizeBasePanel = NULL;
    this->BtnPageClass = NULL;
    this->MiddleImgPageClass = NULL;
    this->MoviePageClass = NULL;
    this->TutorialType = EHbkTutorialTypeName::None;
}

void UHbkTutorialBaseWidget::RestartPage(bool isCurrentPage) {
}

void UHbkTutorialBaseWidget::NowPageStartTalk() {
}

void UHbkTutorialBaseWidget::NextPage() {
}

void UHbkTutorialBaseWidget::NextHierarchy() {
}


void UHbkTutorialBaseWidget::BackPage() {
}

void UHbkTutorialBaseWidget::BackHierarchy() {
}


