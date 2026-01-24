#pragma once
#include "CoreMinimal.h"
#include "HbkCameraActorBase.h"
#include "HbkAnimCameraActor.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class HIBIKI_API AHbkAnimCameraActor : public AHbkCameraActorBase {
    GENERATED_BODY()
public:
    AHbkAnimCameraActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
};

