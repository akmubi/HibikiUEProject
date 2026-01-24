#include "HbkDialogRequestParam.h"

FHbkDialogRequestParam::FHbkDialogRequestParam() {
    this->WidgetType = EHbkDialogWidgetType::Generic;
    this->ButtonSet = EHbkDialogButtonSet::Yes;
    this->Flags = 0;
}

