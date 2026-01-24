#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_ZanzoHologramAnimState.h"
#include "HbkGimmick_CharaHologram.h"
#include "HbkGimmick_ZanzoHologram.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_ZanzoHologram : public AHbkGimmick_CharaHologram {
    GENERATED_BODY()
public:
    AHbkGimmick_ZanzoHologram(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkGimmick_ZanzoHologramAnimState GetAnimState() const;
    
};

