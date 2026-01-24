#include "HbkStoreMenuSelectWidget.h"

UHbkStoreMenuSelectWidget::UHbkStoreMenuSelectWidget() {
    this->ChangeSoundState = NULL;
    this->RestoreSoundState = NULL;
    this->DecideSound = NULL;
    this->CancelSound = NULL;
    this->TutorialTalkData = NULL;
    this->Background = NULL;
    this->ButtonList = NULL;
    this->ButtonDescription = NULL;
    this->Highlight = NULL;
    this->InputMask = NULL;
    this->OpenAnimation = NULL;
    this->OpenForRhythmTowerAnimation = NULL;
    this->CloseAnimation = NULL;
    this->TutorialTalkSession = NULL;
}

void UHbkStoreMenuSelectWidget::UpdateButtonDescription(UWidget* Widget, bool bPlayAnimation, bool bPlaySound) {
}

void UHbkStoreMenuSelectWidget::OnEndTutorialTalk(const FHbkTalkContext TalkContext) {
}

void UHbkStoreMenuSelectWidget::OnClickedButtonListItem(const UHbkButtonBaseWidget* Sender) {
}


