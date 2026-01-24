#include "HbkArcadeMenuParentWidget.h"

UHbkArcadeMenuParentWidget::UHbkArcadeMenuParentWidget() {
    this->bisLevelLoading = false;
    this->bisShowTutorial = true;
    this->OpenAnimation = NULL;
    this->FrontPage = NULL;
    this->BlockNoiseRetainerBox = NULL;
    this->BasePanel = NULL;
    this->WidgetParentPanel = NULL;
    this->PagePanel = NULL;
    this->InputCoverPanel = NULL;
    this->MostBehindBG = NULL;
    this->TutorialCover = NULL;
    this->ButtonIcon = NULL;
    this->RewardPageClass = NULL;
    this->GlitchTime = 2.00f;
    this->OpenParentPageSE = NULL;
    this->OpenRewardPageSE = NULL;
    this->BackPageSE = NULL;
    this->GlitchEffectSE = NULL;
    this->StopMenuBGM = NULL;
    this->DelayTime = 0.00f;
}

void UHbkArcadeMenuParentWidget::WidgetForceLayoutPrepass() {
}


void UHbkArcadeMenuParentWidget::RemoveWidget() {
}

void UHbkArcadeMenuParentWidget::PlayBlockNoiseGlitchAnim(bool PlayAnim) {
}

void UHbkArcadeMenuParentWidget::OnLoadLevel() {
}

void UHbkArcadeMenuParentWidget::OnEndRewardPage(const UHbkArcadeMenuRewardPageWidget* RewardPage) {
}

void UHbkArcadeMenuParentWidget::OnCompleteAllChallenge(const UHbkArcadeMenuRewardPageWidget* RewardPage) {
}

void UHbkArcadeMenuParentWidget::EndArcadeTutorial_BP() {
}

void UHbkArcadeMenuParentWidget::CreateRewardPage(const EHbkArcadeGameModeType GameModeType) {
}


void UHbkArcadeMenuParentWidget::AcceptGameMode(const EHbkArcadeGameModeType GameModeType) {
}


