#include "HbkEm5000EnemyFireSingleSequence.h"

FHbkEm5000EnemyFireSingleSequence::FHbkEm5000EnemyFireSingleSequence() {
    this->Type = EHbkEm5000EnemyFireSingleSequenceType::None;
    this->NoteType = EHbkNote::None;
    this->NoteCount = 0;
    this->bIsAdjust = false;
    this->EasingFunc = EEasingFunc::Linear;
    this->BlendExp = 0.00f;
    this->Steps = 0;
    this->BeginVector = FVector(0.0f);
    this->EndVector = FVector(0.0f);
}

