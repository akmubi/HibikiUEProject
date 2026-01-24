#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_HologramHologramPostParam.h"
#include "HbkGimmick_HologramSound.h"
#include "HbkGimmick_Hologram.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_Hologram : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_HologramHologramPostParam HologramPostParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_HologramSound Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bActive;
    
public:
    AHbkGimmick_Hologram(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnEndHologramPost();
    
};

