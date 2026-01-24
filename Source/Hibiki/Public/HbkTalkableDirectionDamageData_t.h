#pragma once
#include "CoreMinimal.h"
#include "HbkTalkableDirectionDamageData_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkTalkableDirectionDamageData_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float minDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float maxDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndSlotActionName;
    
    HIBIKI_API FHbkTalkableDirectionDamageData_t();
};

