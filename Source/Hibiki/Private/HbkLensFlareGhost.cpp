#include "HbkLensFlareGhost.h"

FHbkLensFlareGhost::FHbkLensFlareGhost() {
    this->LensFlareTexture = NULL;
    this->bUseHalftone = false;
    this->HalftoneFreq = 0.00f;
    this->LensFlareAlpha = 0.00f;
    this->LensFlareIntensity = 0.00f;
    this->LensFlareScale = 0.00f;
    this->LensFlareAspectRatio = 0.00f;
    this->LensFlareLengthOffset = 0.00f;
    this->HalftoneTint = FLinearColor(FColor(0));
    this->LensFlareTint = FLinearColor(FColor(0));
}

