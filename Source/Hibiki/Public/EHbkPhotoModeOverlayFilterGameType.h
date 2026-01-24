#pragma once
#include "CoreMinimal.h"
#include "EHbkPhotoModeOverlayFilterGameType.generated.h"

UENUM(BlueprintType)
enum class EHbkPhotoModeOverlayFilterGameType : uint8 {
    None,
    PaperTexture,
    FilmTexture,
    Num,
};

