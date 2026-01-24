#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkDifficultyType.h"
#include "HbkEm2000PhaseParameter.h"
#include "HbkEm2000ParameterDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm2000ParameterDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm2000PhaseParameter DefaultParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkDifficultyType, FHbkEm2000PhaseParameter> OverrideParam;
    
    HIBIKI_API FHbkEm2000ParameterDataRow();
};

