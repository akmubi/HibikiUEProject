#include "HbkWorldVolumeLightingVolumeComponentPhase.h"

FHbkWorldVolumeLightingVolumeComponentPhase::FHbkWorldVolumeLightingVolumeComponentPhase() {
    this->bOverrideProbeGiLUT = false;
    this->ProbeGiLUT = NULL;
    this->bOverrideProbeGiLutBlendRatio = false;
    this->ProbeGiLutBlendRatio = 0.00f;
    this->bOverrideProbeGiColor = false;
    this->bOverrideProbeGiIntensity = false;
    this->ProbeGiIntensity = 0.00f;
    this->ProbeGiColor = FColor(0);
}

