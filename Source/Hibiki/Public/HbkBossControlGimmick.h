#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EGimmickActivateSetting.h"
#include "HbkBossControlGimmick.generated.h"

class AHbkGimmickBase;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkBossControlGimmick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkGimmickBase> Gimmick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName callSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGimmickActivateSetting ActivateSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtIntValue;
    
    FHbkBossControlGimmick();
};

