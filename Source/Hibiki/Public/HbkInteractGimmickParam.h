#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkInteractGimmickParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkInteractGimmickParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName callSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActivate;
    
    HIBIKI_API FHbkInteractGimmickParam();
};

