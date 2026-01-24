#include "HbkEqualizerWaveControlWave.h"

FHbkEqualizerWaveControlWave::FHbkEqualizerWaveControlWave() {
    this->Index = 0;
    this->bIsWall = false;
    this->bIsCallWaveGround = false;
    this->ShapePattern = EHbkEqualizerWaveShapePattern::ShapePattern1;
    this->DepthIndex = 0;
    this->UpdateTimer = 0.00f;
    this->MoveToNextTime = 0.00f;
    this->bIsNotice = false;
    this->NoticeCount = 0;
    this->NoticeToNextTime = 0.00f;
}

