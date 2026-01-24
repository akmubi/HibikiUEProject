#pragma once
#include "CoreMinimal.h"
#include "EHbkHologramPostActivateGroup.h"
#include "HbkGimmick_HologramHologramPostParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_HologramHologramPostParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActivateRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DeactivateRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkHologramPostActivateGroup ActivateGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeactivateTime;
    
    HIBIKI_API FHbkGimmick_HologramHologramPostParam();
};

