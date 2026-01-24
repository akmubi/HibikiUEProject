#include "HbkCineToonShadingLight.h"
#include "Components/SceneComponent.h"

AHbkCineToonShadingLight::AHbkCineToonShadingLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("HbkCineToonShadingLight"));
    this->bEnable = false;
    this->bOverrideAllFaceMaterial = true;
    this->DirectionOverrideType = EHbkShadeDirectionOverrideType::CameraRelative;
    this->UpAxisRot = -40.00f;
    this->RightAxisRot = 40.00f;
    this->ShadowThresholdOffset = 0.00f;
    this->LitColorIntensity = 1.00f;
    this->ShadowColorIntensity = 1.00f;
    this->LitColorAddIntensity = 1.00f;
    this->ShadowColorAddIntensity = 1.00f;
    this->SpecularColorIntensity = 1.00f;
}


