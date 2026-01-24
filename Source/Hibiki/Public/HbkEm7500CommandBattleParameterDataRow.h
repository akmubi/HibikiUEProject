#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkDifficultyType.h"
#include "HbkEm7500CommandBattleBasicParameter.h"
#include "HbkEm7500CommandBattleParameterDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm7500CommandBattleParameterDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500CommandBattleBasicParameter DefaultParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkDifficultyType, FHbkEm7500CommandBattleBasicParameter> OverrideParam;
    
    HIBIKI_API FHbkEm7500CommandBattleParameterDataRow();
};

