#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorActivateInterface.h"
#include "HbkForwardLight.generated.h"

class AHbkLightClipPlane;
class UHbkForwardLightComponent;
class UHbkGameAgentComponent;

UCLASS(Abstract, Blueprintable)
class AHbkForwardLight : public AActor, public IActorActivateInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkForwardLightComponent* LightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseClipPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkLightClipPlane* ClipPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSaveActivate;
    
public:
    AHbkForwardLight(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

