#include "HbkRSSRecord.h"

FHbkRSSRecord::FHbkRSSRecord() {
    this->RecordId = 0;
    this->RecordTimeMS = 0;
    this->RecordType = EHbkRecordType::Record_None;
    this->DetailKind = 0;
    this->Target = EHbkRecordTargetType::Player;
    this->bIsAlreadyOutput = false;
}

