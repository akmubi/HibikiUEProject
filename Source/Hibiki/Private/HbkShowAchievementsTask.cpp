#include "HbkShowAchievementsTask.h"
#include "Templates/SubclassOf.h"

UHbkShowAchievementsTask::UHbkShowAchievementsTask() {
    this->AchievementsWidgetClass = NULL;
    this->AchievementsWidget = NULL;
}

UHbkShowAchievementsTask* UHbkShowAchievementsTask::ShowAchievements(UObject* WorldContextObject, TSubclassOf<UHbkAchievementsWidget> WidgetClass) {
    return NULL;
}

void UHbkShowAchievementsTask::CloseAchievements() {
}


