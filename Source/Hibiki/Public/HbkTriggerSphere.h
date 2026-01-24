#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerSphere.h"
#include "ActorActivateInterface.h"
#include "EHbkTriggerSphere_SaveType.h"
#include "HbkTriggerSphere.generated.h"

class UHbkGameAgentComponent;
class UHbkOverlapEventLinkComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkTriggerSphere : public ATriggerSphere, public IActorActivateInterface {
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
    EHbkTriggerSphere_SaveType bSaveType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOverlapEventLinkComponent* OverlapEventLinkComp;
    
public:
    AHbkTriggerSphere(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

