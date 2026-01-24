#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkDifficultyType.h"
#include "HbkEm5000BridgeBasicParameter.h"
#include "HbkEm5000BridgeParameterDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm5000BridgeParameterDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000BridgeBasicParameter DefaultParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkDifficultyType, FHbkEm5000BridgeBasicParameter> OverrideParam;
    
    HIBIKI_API FHbkEm5000BridgeParameterDataRow();
};

