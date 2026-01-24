#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_ElectricTrapTilePattern.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_ElectricTrapTilePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ActivateIndexes;
    
    HIBIKI_API FHbkGimmick_ElectricTrapTilePattern();
};

