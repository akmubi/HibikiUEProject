#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_MagnetRailCameraTriggerBase.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_MagnetRailCameraTriggerBase : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    AHbkGimmick_MagnetRailCameraTriggerBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnEndMoveSpline();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginMoveSpline();
    
};

