#pragma once
#include "CoreMinimal.h"
#include "EHbkGalleryProductCategory.generated.h"

UENUM(BlueprintType)
enum class EHbkGalleryProductCategory : uint8 {
    None,
    ModelViewer,
    SoundGallery,
    Max,
};

