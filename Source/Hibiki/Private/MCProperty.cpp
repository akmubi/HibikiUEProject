#include "MCProperty.h"

FMCProperty::FMCProperty() {
    this->MaterialSlotIndex = 0;
    this->NoteType = EHbkNote::None;
    this->MatChangeTimeByNoteCount = 0;
    this->ChangedMaterial = NULL;
    this->DefaultMaterialID = NULL;
    this->ChangedMaterialID = NULL;
    this->Timer = 0.00f;
}

