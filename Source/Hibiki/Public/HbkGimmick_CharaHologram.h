#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_CharaHologramHologramPostParam.h"
#include "HbkGimmick_CharaHologramSound.h"
#include "HbkGimmick_CharaHologram.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_CharaHologram : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_CharaHologramHologramPostParam HologramPostParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_CharaHologramSound Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bActive;
    
public:
    AHbkGimmick_CharaHologram(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnEndHologramPost();
    
    UFUNCTION(BlueprintCallable)
    void OnActivateEndHologramPost();
    
};

