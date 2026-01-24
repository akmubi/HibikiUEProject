#pragma once
#include "CoreMinimal.h"
#include "WorldVolumeLightingVolumeTNG.h"
#include "ActorActivateInterface.h"
#include "HbkWorldVolumeLightingVolume.generated.h"

class UHbkGameAgentComponent;
class UHbkWorldVolumeLightingVolumeComponent;

UCLASS(Blueprintable, CollapseCategories)
class AHbkWorldVolumeLightingVolume : public AWorldVolumeLightingVolumeTNG, public IActorActivateInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkWorldVolumeLightingVolumeComponent* HbkWorldVolumeLightingVolumeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSaveActivate;
    
public:
    AHbkWorldVolumeLightingVolume(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

