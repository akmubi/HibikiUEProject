#include "HbkGimmick_WallPanel.h"

AHbkGimmick_WallPanel::AHbkGimmick_WallPanel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Type = EHbkGimmick_WallPanelType::HideInPhaseB;
    this->bUseRhythmDepth = false;
    this->bUseRhythmScale = true;
}


