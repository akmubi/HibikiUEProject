#include "HbkInteractIconWidget.h"

UHbkInteractIconWidget::UHbkInteractIconWidget() {
    this->InteractTexture = NULL;
    this->ResearchTexture = NULL;
    this->TalkTexture = NULL;
    this->TakeTexture = NULL;
    this->AppearIconAnimation = NULL;
    this->AppearButtonAnimation = NULL;
    this->DisappearAnimation = NULL;
    this->ChangeToIconAnimation = NULL;
    this->ChangeToButtonAnimation = NULL;
    this->LoopAnimation = NULL;
    this->IconImage = NULL;
    this->ButtonImage = NULL;
    this->PlayingAnimation = NULL;
}


void UHbkInteractIconWidget::OnFinishedAnimation() {
}


