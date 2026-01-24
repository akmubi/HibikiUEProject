#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg1340.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_bg1340 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSave;
    
public:
    AHbkGimmick_bg1340(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    float GetAnimPlayRate();
    
};

