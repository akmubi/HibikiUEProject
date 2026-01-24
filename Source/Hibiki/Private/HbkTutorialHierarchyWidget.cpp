#include "HbkTutorialHierarchyWidget.h"

UHbkTutorialHierarchyWidget::UHbkTutorialHierarchyWidget() {
    this->DelayTime = 1.00f;
    this->TutorialBaseClass = NULL;
    this->PageArea = NULL;
    this->PageNext = NULL;
    this->PageBack = NULL;
    this->FinishTutorial = NULL;
}

void UHbkTutorialHierarchyWidget::RestartHierarchy() {
}


void UHbkTutorialHierarchyWidget::NextPage() {
}

void UHbkTutorialHierarchyWidget::NextHierarchy() {
}

bool UHbkTutorialHierarchyWidget::GetisTalkView() {
    return false;
}

void UHbkTutorialHierarchyWidget::CloseTutorial() {
}


void UHbkTutorialHierarchyWidget::BackPage() {
}

void UHbkTutorialHierarchyWidget::BackHierarchy() {
}


