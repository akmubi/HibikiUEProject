#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_VolcaneInterlock.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_VolcaneInterlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* VolcaneBombClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolcaneBombRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolcaneBombPlayerRadius;
    
    HIBIKI_API FHbkGimmick_VolcaneInterlock();
};

