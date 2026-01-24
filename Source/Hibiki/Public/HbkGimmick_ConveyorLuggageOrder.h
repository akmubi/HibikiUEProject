#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_ConveyorLuggageMesh.h"
#include "HbkGimmick_ConveyorLuggageOrder.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_ConveyorLuggageOrder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_ConveyorLuggageMesh> LuggageMeshes;
    
    HIBIKI_API FHbkGimmick_ConveyorLuggageOrder();
};

