#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FaceFXAnimId.h"
#include "FaceFXEntry.h"
#include "OnFaceFXAnimationEventSignatureDelegate.h"
#include "OnFaceFXAudioStartEventSignatureDelegate.h"
#include "OnFaceFXEventSignatureDelegate.h"
#include "FaceFXComponent.generated.h"

class UFaceFXActor;
class UFaceFXAnim;
class UFaceFXCharacter;
class UObject;
class USkeletalMeshComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FACEFX_API UFaceFXComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFaceFXAudioStartEventSignature OnPlaybackAudioStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFaceFXEventSignature OnPlaybackStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFaceFXAnimationEventSignature OnAnimationEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFaceFXEntry> Entries;
    
public:
    UFaceFXComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopAll();
    
    UFUNCTION(BlueprintCallable)
    bool Stop(USkeletalMeshComponent* SkelMeshComp, const UObject* Caller);
    
    UFUNCTION(BlueprintCallable)
    bool Setup(USkeletalMeshComponent* SkelMeshComp, UActorComponent* AudioComponent, const UFaceFXActor* Asset, bool IsCompensateForForceFrontXAxis, bool IsAutoPlaySound, bool IsDisableMorphTargets, bool IsDisableMaterialParameters, bool IsIgnoreEvents, const UObject* Caller);
    
    UFUNCTION(BlueprintCallable)
    bool Resume(USkeletalMeshComponent* SkelMeshComp, const UObject* Caller);
    
    UFUNCTION(BlueprintCallable)
    bool PlayById(FName Group, FName AnimName, USkeletalMeshComponent* SkelMeshComp, bool Loop, const UObject* Caller);
    
    UFUNCTION(BlueprintCallable)
    bool Play(UFaceFXAnim* Animation, USkeletalMeshComponent* SkelMeshComp, bool Loop, const UObject* Caller);
    
    UFUNCTION(BlueprintCallable)
    bool Pause(USkeletalMeshComponent* SkelMeshComp, const UObject* Caller);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterPlaybackStopped(UFaceFXCharacter* Character, const FFaceFXAnimId& AnimId);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterAudioStart(UFaceFXCharacter* Character, const FFaceFXAnimId& AnimId, bool IsAudioStarted, UActorComponent* AudioComponentStartedOn);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterAnimationEvent(UFaceFXCharacter* Character, const FFaceFXAnimId& AnimId, int32 ChannelIndex, float ChannelTime, float EventTime, const FString& Payload);
    
public:
    UFUNCTION(BlueprintCallable)
    bool JumpToById(float Position, bool NewPause, FName Group, FName AnimName, bool LoopAnimation, USkeletalMeshComponent* SkelMeshComp, const UObject* Caller);
    
    UFUNCTION(BlueprintCallable)
    bool JumpTo(float Position, bool NewPause, UFaceFXAnim* Animation, bool LoopAnimation, USkeletalMeshComponent* SkelMeshComp, const UObject* Caller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingAnimation(const FFaceFXAnimId& AnimId, USkeletalMeshComponent* SkelMeshComp, const UObject* Caller) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying(USkeletalMeshComponent* SkelMeshComp, const UObject* Caller) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused(USkeletalMeshComponent* SkelMeshComp, const UObject* Caller) const;
    
};

