#pragma once
#include "CoreMinimal.h"
#include "HbkGesStaticMeshLensFlare.h"
#include "HbkGesLensFlare.generated.h"

USTRUCT(BlueprintType)
struct FHbkGesLensFlare {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHbkGesStaticMeshLensFlare StaticMeshLensFlare;
    
    HIBIKI_API FHbkGesLensFlare();
};

