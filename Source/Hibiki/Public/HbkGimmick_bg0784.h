#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_bg0784.generated.h"

class UCameraShakeBase;

UCLASS(Blueprintable)
class AHbkGimmick_bg0784 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFallenDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bAnimStarted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> CameraShake;
    
public:
    AHbkGimmick_bg0784(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnEndAnim();
    
};

