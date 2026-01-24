#include "HbkActionParam.h"

FHbkActionParam::FHbkActionParam() {
    this->ActorParam = NULL;
    this->FloatParam = 0.00f;
    this->IntParam = 0;
    this->NoteType = EHbkNote::None;
    this->NoteCount = 0;
    this->bIsForcePlay = false;
    this->SyncType = EHbkEmActionSyncType::EAST_NoSync;
    this->MoveVelocityScale = 0.00f;
    this->VectorParam = FVector(0.0f);
    this->TargetLocation = FVector(0.0f);
}

