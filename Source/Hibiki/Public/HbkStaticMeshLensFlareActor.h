#pragma once
#include "CoreMinimal.h"
#include "ActorActivateInterface.h"
#include "HbkStaticMeshActor.h"
#include "HbkStaticMeshLensFlareActor.generated.h"

class UHbkGameAgentComponent;

UCLASS(Blueprintable)
class AHbkStaticMeshLensFlareActor : public AHbkStaticMeshActor, public IActorActivateInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
public:
    AHbkStaticMeshLensFlareActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

