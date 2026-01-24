#include "TngAnimNode_SelectedBoneBlend.h"

FTngAnimNode_SelectedBoneBlend::FTngAnimNode_SelectedBoneBlend() {
    this->BlendWeight = 0.00f;
    this->bMeshSpaceRotationBlend = false;
    this->bMeshSpaceScaleBlend = false;
    this->CurveBlendOption = ECurveBlendOption::Override;
    this->bBlendRootMotionBasedOnRootBone = false;
    this->LODThreshold = 0;
}

