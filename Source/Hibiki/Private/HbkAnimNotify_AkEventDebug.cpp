#include "HbkAnimNotify_AkEventDebug.h"

UHbkAnimNotify_AkEventDebug::UHbkAnimNotify_AkEventDebug() {
    this->DebugGroupID = 1;
    this->Event = NULL;
    this->bFollow = false;
    this->bAutoDestroy = true;
    this->bIgnorePostEventWhenCalledFromADistance = true;
}


