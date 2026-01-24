#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Hbk_CheckDirAndPerformData.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbk_CheckDirAndPerformData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PerformTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    FHbk_CheckDirAndPerformData();
};

