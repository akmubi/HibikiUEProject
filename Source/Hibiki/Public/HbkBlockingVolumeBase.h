#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "ActorActivateInterface.h"
#include "EHbkBlockingVolume_SaveType.h"
#include "HbkBlockingVolumeBase.generated.h"

class UHbkGameAgentComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkBlockingVolumeBase : public AVolume, public IActorActivateInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkBlockingVolume_SaveType bSaveType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
public:
    AHbkBlockingVolumeBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

