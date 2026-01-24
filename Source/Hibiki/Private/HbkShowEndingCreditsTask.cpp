#include "HbkShowEndingCreditsTask.h"
#include "Templates/SubclassOf.h"

UHbkShowEndingCreditsTask::UHbkShowEndingCreditsTask() {
    this->EndingCreditsWidgetClass = NULL;
    this->EndingCreditsWidget = NULL;
}

UHbkShowEndingCreditsTask* UHbkShowEndingCreditsTask::ShowEndingCredits(UObject* WorldContextObject, TSubclassOf<UHbkEndingCreditsWidget> WidgetClass, float FadeDuration) {
    return NULL;
}

void UHbkShowEndingCreditsTask::CloseEndingCredits() {
}


