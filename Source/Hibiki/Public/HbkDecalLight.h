#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorActivateInterface.h"
#include "HbkDecalLight.generated.h"

class UHbkDecalLightComponent;
class UHbkGameAgentComponent;

UCLASS(Abstract, Blueprintable)
class AHbkDecalLight : public AActor, public IActorActivateInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkDecalLightComponent* LightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSaveActivate;
    
public:
    AHbkDecalLight(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

