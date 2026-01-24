#pragma once
#include "CoreMinimal.h"
#include "HbkEm6000_PhaseParameter.h"
#include "HbkEm6000_PhaseParameterDifficultyList.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6000_PhaseParameterDifficultyList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm6000_PhaseParameter> PhaseParam;
    
    HIBIKI_API FHbkEm6000_PhaseParameterDifficultyList();
};

