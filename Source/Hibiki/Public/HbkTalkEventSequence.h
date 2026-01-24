#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "ActorActivateInterface.h"
#include "HbkTalkContext.h"
#include "HbkTalkEventActorInfo.h"
#include "HbkTalkEventCameraInfo.h"
#include "HbkTalkEventSeqDelegateDelegate.h"
#include "HbkTalkEventSequence.generated.h"

class AHbkCameraActor;
class APlayerController;
class UHbkGameAgentComponent;
class UHbkTalkEventTemplate;

UCLASS(Blueprintable)
class HIBIKI_API AHbkTalkEventSequence : public ATargetPoint, public IActorActivateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkEventSeqDelegate OnPostDeployTalkEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkEventSeqDelegate OnTalkEventEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkTalkEventTemplate* TalkEventTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkCameraActor> CameraPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FHbkTalkEventCameraInfo> CameraList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FHbkTalkEventActorInfo> ActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UHbkTalkEventTemplate*> TalkEventTemplateOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkTalkEventTemplate* CurTalkEventTemplate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComponent;
    
public:
    AHbkTalkEventSequence(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void RecieveTalkSessionEnd(const FHbkTalkContext TalkContext);
    
    UFUNCTION(BlueprintCallable)
    void RecieveTalkCue(const FName TalkCue);
    
public:
    UFUNCTION(BlueprintCallable)
    bool PlayTalkEventByOption(APlayerController* Controller, const FName OptionName);
    
    UFUNCTION(BlueprintCallable)
    bool PlayTalkEvent(APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    UHbkTalkEventTemplate* GetTalkEventTemplate();
    

    // Fix for true pure virtual functions not being implemented
};

