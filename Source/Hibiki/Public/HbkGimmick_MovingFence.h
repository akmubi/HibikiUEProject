#pragma once
#include "CoreMinimal.h"
#include "DownStartDelegate.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_MovingFenceAction.h"
#include "HbkGimmick_MovingFenceSound.h"
#include "HbkGimmick_MovingFence.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_MovingFence : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownStartDelegate OnDownStart;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_MovingFenceAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_MovingFenceSound Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bDown;
    
public:
    AHbkGimmick_MovingFence(const FObjectInitializer& ObjectInitializer);

};

