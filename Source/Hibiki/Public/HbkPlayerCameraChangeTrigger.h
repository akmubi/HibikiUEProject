#pragma once
#include "CoreMinimal.h"
#include "HbkTriggerBox.h"
#include "HbkPlayerCameraChangeTrigger.generated.h"

class UHbkPlayerCameraChangeComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkPlayerCameraChangeTrigger : public AHbkTriggerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerCameraChangeComponent* PlayerCameraChangeComp;
    
public:
    AHbkPlayerCameraChangeTrigger(const FObjectInitializer& ObjectInitializer);

};

