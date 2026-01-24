#pragma once
#include "CoreMinimal.h"
#include "HbkEm2000PhaseParameter.h"
#include "HbkEm2000PhaseParameterDifficultyList.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm2000PhaseParameterDifficultyList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm2000PhaseParameter> PhaseParam;
    
    HIBIKI_API FHbkEm2000PhaseParameterDifficultyList();
};

