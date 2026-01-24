#include "HbkExtraGraphicsQualitySettings.h"

UHbkExtraGraphicsQualitySettings::UHbkExtraGraphicsQualitySettings() {
    this->MotionBlurPresets.AddDefaulted(4);
    this->DynamicShadowMapsPresets.AddDefaulted(4);
    this->FoliagePresets.AddDefaulted(4);
    this->SSAOPresets.AddDefaulted(3);
    this->DepthOfFieldPresets.AddDefaulted(4);
    this->AntiAliasingPresets.AddDefaulted(3);
    this->GPUPhysicsSimulationPresets.AddDefaulted(4);
    this->GraphicsPresets.AddDefaulted(3);
    this->DLSSPresets.AddDefaulted(5);
    this->FSR1Presets.AddDefaulted(5);
    this->FSR2Presets.AddDefaulted(5);
    this->XeSSPresets.AddDefaulted(6);
    this->TSRPresets.AddDefaulted(5);
    this->NVIDIAReflexPresets.AddDefaulted(3);
}


