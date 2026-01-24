#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_BreakObjectMaterial.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_BreakObjectMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
    HIBIKI_API FHbkGimmick_BreakObjectMaterial();
};

