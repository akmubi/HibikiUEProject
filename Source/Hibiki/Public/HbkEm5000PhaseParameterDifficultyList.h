#pragma once
#include "CoreMinimal.h"
#include "HbkEm5000PhaseParameter.h"
#include "HbkEm5000PhaseParameterDifficultyList.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEm5000PhaseParameterDifficultyList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm5000PhaseParameter> PhaseParam;
    
    FHbkEm5000PhaseParameterDifficultyList();
};

