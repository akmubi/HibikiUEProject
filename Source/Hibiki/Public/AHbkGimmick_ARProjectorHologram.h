#pragma once
#include "CoreMinimal.h"
#include "EHbkHologramPostActivateGroup.h"
#include "AHbkGimmick_ARProjectorHologram.generated.h"

USTRUCT(BlueprintType)
struct FAHbkGimmick_ARProjectorHologram {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActivateRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkHologramPostActivateGroup ActivateGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActivateCount;
    
    HIBIKI_API FAHbkGimmick_ARProjectorHologram();
};

