#include "HbkAnimNotify_ChangeFlightDamage.h"

UHbkAnimNotify_ChangeFlightDamage::UHbkAnimNotify_ChangeFlightDamage() {
    this->FlightDuration = 0.00f;
    this->bIsBeatTime = false;
    this->NoteType = EHbkNote::None;
    this->NoteCount = 0;
    this->bIsRefByEmDamageParam = false;
}


