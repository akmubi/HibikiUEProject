#include "HbkRestartActor.h"

AHbkRestartActor::AHbkRestartActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RestartDataTable = NULL;
    this->RemoteEventPrefixName = TEXT("CE_");
    this->bCallRemoteEventToLevel = false;
}


