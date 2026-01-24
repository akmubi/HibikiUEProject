#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkDifficultyType.h"
#include "HbkEm6000CommandBattleCommandList.h"
#include "HbkEm6000CommandBattleCommandParameterDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6000CommandBattleCommandParameterDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000CommandBattleCommandList DefaultParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkDifficultyType, FHbkEm6000CommandBattleCommandList> OverrideParam;
    
    HIBIKI_API FHbkEm6000CommandBattleCommandParameterDataRow();
};

