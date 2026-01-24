#pragma once
#include "CoreMinimal.h"
#include "HbkLevelDifficultyParamsBase.generated.h"

USTRUCT(BlueprintType)
struct FHbkLevelDifficultyParamsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClassName;
    
    HIBIKI_API FHbkLevelDifficultyParamsBase();
};

