#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkRestartActivateType.h"
#include "HbkRestartActivateInfo.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkRestartActivateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkRestartActivateType ActivateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName callSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtIntValue;
    
    FHbkRestartActivateInfo();
};

