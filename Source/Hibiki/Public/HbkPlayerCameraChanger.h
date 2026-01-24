#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorActivateInterface.h"
#include "HbkPlayerCameraChanger.generated.h"

class UHbkPlayerCameraChangeComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkPlayerCameraChanger : public AActor, public IActorActivateInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerCameraChangeComponent* PlayerCameraChangeComp;
    
public:
    AHbkPlayerCameraChanger(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

