#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerCapsule.h"
#include "ActorActivateInterface.h"
#include "EHbkTriggerCapsule_SaveType.h"
#include "HbkTriggerCapsule.generated.h"

class UHbkGameAgentComponent;
class UHbkOverlapEventLinkComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkTriggerCapsule : public ATriggerCapsule, public IActorActivateInterface {
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
    bool bDoOnceSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkTriggerCapsule_SaveType bSaveType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOverlapEventLinkComponent* OverlapEventLinkComp;
    
public:
    AHbkTriggerCapsule(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

