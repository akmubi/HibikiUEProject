#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkElectricTrapTileDifficultyParams.h"
#include "HbkLevelDifficultyParamsRow.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkLevelDifficultyParamsRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkElectricTrapTileDifficultyParams> ElectricTrapTileParams;
    
    FHbkLevelDifficultyParamsRow();
};

