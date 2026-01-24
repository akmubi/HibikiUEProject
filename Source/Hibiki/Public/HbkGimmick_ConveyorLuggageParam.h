#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_ConveyorLuggageOrder.h"
#include "HbkGimmick_ConveyorLuggageParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_ConveyorLuggageParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_ConveyorLuggageOrder> LuggageOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveOutOfPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> FlowPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfileName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCameraDitherAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlaceLuggageFirst;
    
    HIBIKI_API FHbkGimmick_ConveyorLuggageParam();
};

