#include "HbkGesGameEnvLighting.h"

FHbkGesGameEnvLighting::FHbkGesGameEnvLighting() {
    this->bOverrideEnvShadeIntensity = false;
    this->EnvShadeIntensity = 0.00f;
    this->bOverrideEnvForwardLightIntensity = false;
    this->EnvForwardLightIntensity = 0.00f;
    this->bOverrideEnvEmissiveIntensity = false;
    this->EnvEmissiveIntensity = 0.00f;
    this->bOverrideEnvEmissiveColorMult = false;
    this->bOverrideEnvEmissiveColorAdd = false;
    this->bOverrideEnvLitColor = false;
    this->bOverrideEnvUnlitColor = false;
    this->bOverrideProbeGiIntensity = false;
    this->ProbeGiIntensity = 0.00f;
    this->EnvEmissiveColorMult = FLinearColor(FColor(0));
    this->EnvEmissiveColorAdd = FLinearColor(FColor(0));
    this->EnvBaseColor = FColor(0);
    this->EnvUnlitColor = FColor(0);
}

