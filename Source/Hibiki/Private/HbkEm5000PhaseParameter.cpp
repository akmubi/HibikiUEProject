#include "HbkEm5000PhaseParameter.h"

FHbkEm5000PhaseParameter::FHbkEm5000PhaseParameter() {
    this->SoundBlasterNumberOfTimeToKeepShooting = 0;
    this->SolidVocalNumberOfShooting = 0;
    this->NumberOfEqualizerWaveGenerator = 0;
    this->EqualizerWaveGeneratorHealthOfPeppermint = 0.00f;
    this->EqualizerWaveGeneratorHealthOfMacaron = 0.00f;
    this->EqualizerWaveGeneratorHealthOfPeppermintPlayer = 0.00f;
    this->EqualizerWaveGeneratorHealthOfMacaronPlayer = 0.00f;
    this->EqualizerWavePattern = EHbkEqualizerWavePattern::None;
    this->EqualizerWaveShapePatternKinds = 0;
    this->SoundBlasterFestivalLaserBehaviorKinds = 0;
    this->SoundBlasterFestivalLaserSafeAngleY = 0.00f;
    this->SolidVocalAssaultTypeKinds = 0;
    this->SolidVocalHealth = 0.00f;
    this->IsSolidVocalExplode = false;
    this->AerialDownStateEndRate = 0.00f;
    this->LandingAfterAttackRate = 0.00f;
    this->bIsSecondGrab = false;
}

