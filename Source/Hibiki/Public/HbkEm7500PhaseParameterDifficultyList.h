#pragma once
#include "CoreMinimal.h"
#include "HbkEm7500PhaseParameter.h"
#include "HbkEm7500PhaseParameterDifficultyList.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEm7500PhaseParameterDifficultyList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500PhaseParameter> PhaseParam;
    
    FHbkEm7500PhaseParameterDifficultyList();
};

