#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "ActorActivateInterface.h"
#include "HbkBattleBlockingVolume.generated.h"

class UHbkGameAgentComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkBattleBlockingVolume : public AVolume, public IActorActivateInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
public:
    AHbkBattleBlockingVolume(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

