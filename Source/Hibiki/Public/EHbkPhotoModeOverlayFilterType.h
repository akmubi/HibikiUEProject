#pragma once
#include "CoreMinimal.h"
#include "EHbkPhotoModeOverlayFilterType.generated.h"

UENUM(BlueprintType)
enum class EHbkPhotoModeOverlayFilterType : uint8 {
    PaperTexture,
    FilmTexture,
    ScanlineTexture,
    Num,
};

