#pragma once
#include "CoreMinimal.h"
#include "EHbkHologramCharaPostActivateGroup.h"
#include "HbkGimmick_CharaHologramHologramPostParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_CharaHologramHologramPostParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActivateRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DeactivateRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkHologramCharaPostActivateGroup ActivateGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeactivateTime;
    
    HIBIKI_API FHbkGimmick_CharaHologramHologramPostParam();
};

