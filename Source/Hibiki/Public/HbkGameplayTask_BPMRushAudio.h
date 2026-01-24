#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_BPMRushAudio.generated.h"

class AHbkBPMRushController;
class UAkAudioEvent;
class UHbkGameplayTask_BPMRushAudio;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_BPMRushAudio : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndDelegate OnEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkBPMRushController* BPMRushController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayStateEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopMusicEvent;
    
public:
    UHbkGameplayTask_BPMRushAudio(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_BPMRushAudio* Create(UObject* WorldContextObject, AHbkBPMRushController* NewBPMRushController, UAkAudioEvent* NewPlayMusicEvent, UAkAudioEvent* NewPlayStateEvent, UAkAudioEvent* NewStopMusicEvent);
    
};

