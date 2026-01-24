#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_ElectricTrapTileMatch.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_ElectricTrapTileMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActivateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ElectricCoreExtInt;
    
    HIBIKI_API FHbkGimmick_ElectricTrapTileMatch();
};

