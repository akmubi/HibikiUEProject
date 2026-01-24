#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkMGRhythmDungeon_ProductWithParamInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmDungeon_ProductWithParamInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ProductTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Param;
    
    HIBIKI_API FHbkMGRhythmDungeon_ProductWithParamInfo();
};

