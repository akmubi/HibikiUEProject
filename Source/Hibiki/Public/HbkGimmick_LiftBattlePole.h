#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_LiftBattlePole.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_LiftBattlePole : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> windowNoiseSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pWindowNoiseSE;
    
public:
    AHbkGimmick_LiftBattlePole(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnCommonResourceSuccess();
    
};

