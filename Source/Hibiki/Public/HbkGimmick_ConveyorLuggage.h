#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_ConveyorLuggageInstance.h"
#include "HbkGimmick_ConveyorLuggageParam.h"
#include "HbkGimmick_ConveyorLuggagePoint.h"
#include "HbkGimmick_ConveyorLuggage.generated.h"

class AHbkGimmick_SplineConveyor;

UCLASS(Blueprintable)
class AHbkGimmick_ConveyorLuggage : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmick_SplineConveyor* SplineConveyor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ConveyorLuggageParam LuggageParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_ConveyorLuggagePoint> LuggagePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_ConveyorLuggageInstance> LuggageInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> FlowPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FlowPatternIndex;
    
public:
    AHbkGimmick_ConveyorLuggage(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TransitionStateStay(int32 StayCount);
    
    UFUNCTION(BlueprintCallable)
    void TransitionStateMove(int32 MoveCount);
    
    UFUNCTION(BlueprintCallable)
    void CreateLuggage();
    
};

