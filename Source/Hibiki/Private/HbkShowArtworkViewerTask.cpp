#include "HbkShowArtworkViewerTask.h"
#include "Templates/SubclassOf.h"

UHbkShowArtworkViewerTask::UHbkShowArtworkViewerTask() {
    this->ViewerWidgetClass = NULL;
}

UHbkShowArtworkViewerTask* UHbkShowArtworkViewerTask::ShowArtworkViewer(UObject* WorldContextObject, TSubclassOf<UHbkArtworkViewerWidget> WidgetClass) {
    return NULL;
}

void UHbkShowArtworkViewerTask::CloseViewer() {
}


