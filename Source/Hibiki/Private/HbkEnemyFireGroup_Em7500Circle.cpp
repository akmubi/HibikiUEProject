#include "HbkEnemyFireGroup_Em7500Circle.h"

AHbkEnemyFireGroup_Em7500Circle::AHbkEnemyFireGroup_Em7500Circle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CircleFireGroupType = EHbkEm7500CircleFireGroupType::HelmDivideSlash;
    this->CheckTraceChannel = TraceTypeQuery1;
    this->bIsVisibleHitCheck = false;
}


