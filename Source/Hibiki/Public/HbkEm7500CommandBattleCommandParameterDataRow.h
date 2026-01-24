#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkDifficultyType.h"
#include "HbkEm7500CommandBattleCommandList.h"
#include "HbkEm7500CommandBattleCommandParameterDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm7500CommandBattleCommandParameterDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500CommandBattleCommandList DefaultParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkDifficultyType, FHbkEm7500CommandBattleCommandList> OverrideParam;
    
    HIBIKI_API FHbkEm7500CommandBattleCommandParameterDataRow();
};

