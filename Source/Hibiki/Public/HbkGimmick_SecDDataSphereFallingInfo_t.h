#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkGimmick_SecDDataSphereFallingInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_SecDDataSphereFallingInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HiddenFalseTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer activateTag;
    
    HIBIKI_API FHbkGimmick_SecDDataSphereFallingInfo_t();
};

