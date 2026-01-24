#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "ActorActivateInterface.h"
#include "HbkCullingVolume.generated.h"

class UHbkGameAgentComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AHbkCullingVolume : public AVolume, public IActorActivateInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UPrimitiveComponent>> CullingComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bActive;
    
public:
    AHbkCullingVolume(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

