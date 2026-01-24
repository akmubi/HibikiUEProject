#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkDifficultyType.h"
#include "HbkEm6000_PhaseFixedParameter.h"
#include "HbkEm6000_PhaseParameter.h"
#include "HbkEm6000_ParameterDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6000_ParameterDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000_PhaseFixedParameter FixedParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000_PhaseParameter DefaultParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkDifficultyType, FHbkEm6000_PhaseParameter> OverrideParam;
    
    HIBIKI_API FHbkEm6000_ParameterDataRow();
};

