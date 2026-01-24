#pragma once
#include "CoreMinimal.h"
#include "HbkLevelDifficultyParamsBase.h"
#include "HbkElectricTrapTileDifficultyParams.generated.h"

USTRUCT(BlueprintType)
struct FHbkElectricTrapTileDifficultyParams : public FHbkLevelDifficultyParamsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackCount;
    
    HIBIKI_API FHbkElectricTrapTileDifficultyParams();
};

