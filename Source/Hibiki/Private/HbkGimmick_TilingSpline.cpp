#include "HbkGimmick_TilingSpline.h"
#include "TngSplineComponent.h"

AHbkGimmick_TilingSpline::AHbkGimmick_TilingSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->SplineComp = CreateDefaultSubobject<UTngSplineComponent>(TEXT("Spline"));
    this->Mesh = NULL;
    this->Scale = 1.00f;
    this->CurveBias = 1.00f;
    this->bSplineUpDirDirect = false;
    this->CollisionProfileName = TEXT("BlockAll");
    this->bSkipCameraMotionBlur = false;
    this->bSplineCastShadow = true;
    this->SplineMeshShadowType = EHbkEnvShadowType::NotSet;
    this->SplineDynamicShadowMapType = EHbkDynamicShadowMapType::DynamicShadowMapType3;
    this->HologramPostActivateGroup = EHbkHologramPostActivateGroup::HologramPostNoActivate;
}

void AHbkGimmick_TilingSpline::SetSkipCameraMotionBlur(bool NewSkipCameraMotionBlur) {
}

void AHbkGimmick_TilingSpline::CopySplineCurves(UTngSplineComponent* SrcSplineComp) {
}


