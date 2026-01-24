#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkDifficultyType.h"
#include "HbkEm6000CommandBattleBasicParameter.h"
#include "HbkEm6000CommandBattleParameterDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6000CommandBattleParameterDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000CommandBattleBasicParameter DefaultParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkDifficultyType, FHbkEm6000CommandBattleBasicParameter> OverrideParam;
    
    HIBIKI_API FHbkEm6000CommandBattleParameterDataRow();
};

