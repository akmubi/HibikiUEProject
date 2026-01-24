#include "WorldVolumeLightingVolumeComponentTNG.h"

UWorldVolumeLightingVolumeComponentTNG::UWorldVolumeLightingVolumeComponentTNG(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
    this->OcclusionContrast = 0.50f;
    this->OcclusionExponent = 1.00f;
    this->MinOcclusion = 0.15f;
    this->OcclusionNormalOffsetBias = 30.00f;
    this->DrawPriority = 0;
    this->BakeBorderPadding = 400.00f;
    this->BakeSceneGatherPadding = 1000.00f;
    this->DetailCellSize = 100;
    this->ProbeGiLUT = NULL;
    this->ProbeGiLutBlendRatio = 1.00f;
    this->ProbeGiIntensity = 1.00f;
    this->bUseProbeGiEdgeFade = false;
    this->ProbeGiEdgeFadePow = 1.00f;
    this->bMoveableTrans = false;
    this->bMoveableTransRot = false;
    this->bBakeAlwaysStatic = false;
}


