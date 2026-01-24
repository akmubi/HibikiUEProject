#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorActivateInterface.h"
#include "EHbkPostProcessVolume_SaveType.h"
#include "HbkPostProcessVolume.generated.h"

class UHbkGameAgentComponent;
class UHbkPostProcessVolumeGameComponent;

UCLASS(Blueprintable)
class AHbkPostProcessVolume : public AActor, public IActorActivateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPostProcessVolumeGameComponent* HbkPostProcessVolumeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkPostProcessVolume_SaveType bSaveType;
    
    AHbkPostProcessVolume(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

