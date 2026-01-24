#pragma once
#include "CoreMinimal.h"
#include "Engine/Light.h"
#include "ActorActivateInterface.h"
#include "HbkLight.generated.h"

class UHbkGameAgentComponent;

UCLASS(Abstract, Blueprintable)
class AHbkLight : public ALight, public IActorActivateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
    AHbkLight(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

