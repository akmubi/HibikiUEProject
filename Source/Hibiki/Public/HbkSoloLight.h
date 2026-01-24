#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkSoloLight.generated.h"

class UHbkSoloLightComponent;

UCLASS(Abstract, Blueprintable)
class AHbkSoloLight : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSoloLightComponent* LightComponent;
    
public:
    AHbkSoloLight(const FObjectInitializer& ObjectInitializer);

};

