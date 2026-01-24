#include "HbkShowModelViewerTask.h"
#include "Templates/SubclassOf.h"

UHbkShowModelViewerTask::UHbkShowModelViewerTask() {
    this->ModelViewerWidgetClass = NULL;
    this->ModelViewerWidget = NULL;
}

UHbkShowModelViewerTask* UHbkShowModelViewerTask::ShowModelViewer(UObject* WorldContextObject, TSubclassOf<UHbkModelViewerBaseWidget> WidgetClass) {
    return NULL;
}

void UHbkShowModelViewerTask::CloseModelViewer() {
}


