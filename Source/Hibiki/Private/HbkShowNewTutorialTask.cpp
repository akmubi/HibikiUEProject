#include "HbkShowNewTutorialTask.h"
#include "Templates/SubclassOf.h"

UHbkShowNewTutorialTask::UHbkShowNewTutorialTask() {
}

void UHbkShowNewTutorialTask::TutorialSkip() {
}

UHbkShowNewTutorialTask* UHbkShowNewTutorialTask::ShowTutorial_SpecifyPageType(UObject* WorldContextObject, EHbkTutorialTypeName PageType, TSubclassOf<UHbkTutorialDataObject> FirstPageData, TSubclassOf<UHbkTutorialDataObject> SecondPageData, TSubclassOf<UHbkTutorialDataObject> ThirdPageData) {
    return NULL;
}

UHbkShowNewTutorialTask* UHbkShowNewTutorialTask::ShowTutorial_SmallPage(UObject* WorldContextObject, TSubclassOf<UHbkTutorialDataObject_ButtonType> FirstPageData, TSubclassOf<UHbkTutorialDataObject_ButtonType> SecondPageData, TSubclassOf<UHbkTutorialDataObject_ButtonType> ThirdPageData, float DisplayTime, bool isInput, bool isSkip) {
    return NULL;
}

UHbkShowNewTutorialTask* UHbkShowNewTutorialTask::ShowTutorial_MixPage(UObject* WorldContextObject, TSubclassOf<UHbkTutorialDataObject_ButtonType> FirstPageData, TSubclassOf<UHbkTutorialDataObject_ButtonType> SecondPageData, TSubclassOf<UHbkTutorialDataObject_ButtonType> ThirdPageData, TSubclassOf<UHbkTutorialDataObject_ImageType> ImgPageData, TSubclassOf<UHbkTutorialDataObject_MovieType> MoviePageData, float DisplayTime, bool isInput, EHbkTutorialHorizontalWidgetPosType HorizontalPos, bool isSkip) {
    return NULL;
}

UHbkShowNewTutorialTask* UHbkShowNewTutorialTask::ShowTutorial_MiddlePage_OnlyOne(UObject* WorldContextObject, TSubclassOf<UHbkTutorialDataObject_ImageType> PageData, float DisplayTime, bool isInput, EHbkTutorialHorizontalWidgetPosType HorizontalPos, bool isSkip) {
    return NULL;
}

UHbkShowNewTutorialTask* UHbkShowNewTutorialTask::ShowTutorial_MiddlePage(UObject* WorldContextObject, TSubclassOf<UHbkTutorialDataObject_ImageType> FirstPageData, TSubclassOf<UHbkTutorialDataObject_ImageType> SecondPageData, TSubclassOf<UHbkTutorialDataObject_ImageType> ThirdPageData, bool isRobot, bool isSkip) {
    return NULL;
}

UHbkShowNewTutorialTask* UHbkShowNewTutorialTask::ShowTutorial_LargePage(UObject* WorldContextObject, TSubclassOf<UHbkTutorialDataObject_MovieType> PageData, bool isSkip) {
    return NULL;
}

UHbkShowNewTutorialTask* UHbkShowNewTutorialTask::ShowTutorial_ArcadeMachine(UObject* WorldContextObject, TSubclassOf<UHbkTutorialDataObject_MovieType> PageData, bool isSkip) {
    return NULL;
}

void UHbkShowNewTutorialTask::OnPlayerDamaged() {
}

void UHbkShowNewTutorialTask::OnDisplayEndClear() {
}

void UHbkShowNewTutorialTask::OnChangePage(int32 CurrentHierarchyNum) {
}

UHbkShowNewTutorialTask* UHbkShowNewTutorialTask::CloseTutorialPage(UObject* WorldContextObject) {
    return NULL;
}


