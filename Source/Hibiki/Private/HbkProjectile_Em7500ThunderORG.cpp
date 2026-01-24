#include "HbkProjectile_Em7500ThunderORG.h"

AHbkProjectile_Em7500ThunderORG::AHbkProjectile_Em7500ThunderORG(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Process = EHbkEm7500ThunderOriginProcess::None;
    this->ProcessNo = 0;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->LaunchNameForThunder = TEXT("Thunder");
    this->CheckTraceChannel = TraceTypeQuery1;
    this->CheckTraceRadius = 50.00f;
}


