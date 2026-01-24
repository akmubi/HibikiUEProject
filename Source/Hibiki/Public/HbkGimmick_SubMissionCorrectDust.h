#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_SubMissionCorrectDust.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_SubMissionCorrectDust : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    AHbkGimmick_SubMissionCorrectDust(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnEndAnim();
    
};

