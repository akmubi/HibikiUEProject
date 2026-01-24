#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "ActorActivateInterface.h"
#include "EHbkTriggerVolume_SaveType.h"
#include "HbkTriggerVolume.generated.h"

class UHbkGameAgentComponent;
class UHbkOverlapEventLinkComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkTriggerVolume : public ATriggerVolume, public IActorActivateInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBeginOverlapDoOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndOverlapDoOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkTriggerVolume_SaveType bSaveType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOverlapEventLinkComponent* OverlapEventLinkComp;
    
public:
    AHbkTriggerVolume(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

