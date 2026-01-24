#include "AkEventParam.h"

FAkEventParam::FAkEventParam() {
    this->Event = NULL;
    this->bFollow = false;
    this->bAutoDestroy = false;
    this->bIgnorePostEventWhenCalledFromADistance = false;
}

