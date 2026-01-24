#include "AkCandidateVolume.h"

AAkCandidateVolume::AAkCandidateVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->bColored = true;
}


