#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_RockfallMaterial.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_RockfallMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
    HIBIKI_API FHbkGimmick_RockfallMaterial();
};

