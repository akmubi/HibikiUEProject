#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "ActorActivateInterface.h"
#include "EHbkTriggerBox_SaveType.h"
#include "HbkTriggerBox.generated.h"

class UHbkGameAgentComponent;
class UHbkOverlapEventLinkComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkTriggerBox : public ATriggerBox, public IActorActivateInterface {
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
    EHbkTriggerBox_SaveType bSaveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfileName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOverlapEventLinkComponent* OverlapEventLinkComp;
    
public:
    AHbkTriggerBox(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivate() const;
    

    // Fix for true pure virtual functions not being implemented
};

