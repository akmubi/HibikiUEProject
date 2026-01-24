#pragma once
#include "CoreMinimal.h"
#include "ActorActivateInterface.h"
#include "HbkStaticMeshActor.h"
#include "HbkAnalyticFogActor.generated.h"

class UHbkGameAgentComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkAnalyticFogActor : public AHbkStaticMeshActor, public IActorActivateInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSaveActivate;
    
public:
    AHbkAnalyticFogActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

