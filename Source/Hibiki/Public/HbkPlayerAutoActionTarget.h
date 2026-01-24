#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkAutoActionInterface.h"
#include "HbkPlayerAutoActionTarget.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkPlayerAutoActionTarget : public AActor, public IHbkAutoActionInterface {
    GENERATED_BODY()
public:
    AHbkPlayerAutoActionTarget(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTargetActiveState(bool bEnable);
    

    // Fix for true pure virtual functions not being implemented
};

