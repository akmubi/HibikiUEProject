#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorActivateInterface.h"
#include "HbkTalkMsg.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkTalkMsg : public AActor, public IActorActivateInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeactiveStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 TalkMsgState;
    
public:
    AHbkTalkMsg(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnDeactivateTalkMsg();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnActivateTalkMsg();
    

    // Fix for true pure virtual functions not being implemented
};

