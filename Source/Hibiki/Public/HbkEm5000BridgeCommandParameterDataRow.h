#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkDifficultyType.h"
#include "HbkEm5000BridgeBreakdownCommandList.h"
#include "HbkEm5000BridgeCommandParameterDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm5000BridgeCommandParameterDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000BridgeBreakdownCommandList DefaultParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkDifficultyType, FHbkEm5000BridgeBreakdownCommandList> OverrideParam;
    
    HIBIKI_API FHbkEm5000BridgeCommandParameterDataRow();
};

