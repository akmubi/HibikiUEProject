#include "HbkGesOutline.h"

FHbkGesOutline::FHbkGesOutline() {
    this->bOverrideMeshOutlineWidth = false;
    this->MeshOutlineWidth = 0.00f;
    this->bOverrideMeshOutlineZOffset = false;
    this->MeshOutlineZOffset = 0.00f;
    this->bOverrideDepthOutlineFarDistance = false;
    this->DepthOutlineFarDistance = 0.00f;
    this->bOverrideDepthOutlineType = false;
    this->DepthOutlineType = EHbkDepthOutlineType::InsideOnly;
    this->bOverrideNormalOutlineVariableThickness = false;
    this->bNormalOutlineVariableThickness = false;
    this->bOverrideCharaStencilOutlineThickness = false;
    this->CharaStencilOutlineThickness = 0.00f;
    this->bOverrideCharaStencilOutlineDepthFadeStart = false;
    this->CharaStencilOutlineDepthFadeStart = 0.00f;
    this->bOverrideCharaStencilOutlineDepthFadeDist = false;
    this->CharaStencilOutlineDepthFadeDist = 0.00f;
}

