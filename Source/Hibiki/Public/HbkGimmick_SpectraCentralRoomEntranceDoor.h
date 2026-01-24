#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_SpectraCentralRoomEntranceDoorTransition.h"
#include "HbkGimmick_SpectraCentralRoomEntranceDoor.generated.h"

class UHbkGameplayTask_ScreenTransition;

UCLASS(Blueprintable)
class AHbkGimmick_SpectraCentralRoomEntranceDoor : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SpectraCentralRoomEntranceDoorTransition Transition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_ScreenTransition* ScreenTransitionTask;
    
public:
    AHbkGimmick_SpectraCentralRoomEntranceDoor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ScreenTransitionHalfDuration();
    
    UFUNCTION(BlueprintCallable)
    void ScreenTransitionFinished();
    
};

