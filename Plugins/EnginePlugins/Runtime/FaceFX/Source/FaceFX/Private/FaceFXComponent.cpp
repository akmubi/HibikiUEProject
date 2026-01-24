#include "FaceFXComponent.h"

UFaceFXComponent::UFaceFXComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UFaceFXComponent::StopAll() {
}

bool UFaceFXComponent::Stop(USkeletalMeshComponent* SkelMeshComp, const UObject* Caller) {
    return false;
}

bool UFaceFXComponent::Setup(USkeletalMeshComponent* SkelMeshComp, UActorComponent* AudioComponent, const UFaceFXActor* Asset, bool IsCompensateForForceFrontXAxis, bool IsAutoPlaySound, bool IsDisableMorphTargets, bool IsDisableMaterialParameters, bool IsIgnoreEvents, const UObject* Caller) {
    return false;
}

bool UFaceFXComponent::Resume(USkeletalMeshComponent* SkelMeshComp, const UObject* Caller) {
    return false;
}

bool UFaceFXComponent::PlayById(FName Group, FName AnimName, USkeletalMeshComponent* SkelMeshComp, bool Loop, const UObject* Caller) {
    return false;
}

bool UFaceFXComponent::Play(UFaceFXAnim* Animation, USkeletalMeshComponent* SkelMeshComp, bool Loop, const UObject* Caller) {
    return false;
}

bool UFaceFXComponent::Pause(USkeletalMeshComponent* SkelMeshComp, const UObject* Caller) {
    return false;
}

void UFaceFXComponent::OnCharacterPlaybackStopped(UFaceFXCharacter* Character, const FFaceFXAnimId& AnimId) {
}

void UFaceFXComponent::OnCharacterAudioStart(UFaceFXCharacter* Character, const FFaceFXAnimId& AnimId, bool IsAudioStarted, UActorComponent* AudioComponentStartedOn) {
}

void UFaceFXComponent::OnCharacterAnimationEvent(UFaceFXCharacter* Character, const FFaceFXAnimId& AnimId, int32 ChannelIndex, float ChannelTime, float EventTime, const FString& Payload) {
}

bool UFaceFXComponent::JumpToById(float Position, bool NewPause, FName Group, FName AnimName, bool LoopAnimation, USkeletalMeshComponent* SkelMeshComp, const UObject* Caller) {
    return false;
}

bool UFaceFXComponent::JumpTo(float Position, bool NewPause, UFaceFXAnim* Animation, bool LoopAnimation, USkeletalMeshComponent* SkelMeshComp, const UObject* Caller) {
    return false;
}

bool UFaceFXComponent::IsPlayingAnimation(const FFaceFXAnimId& AnimId, USkeletalMeshComponent* SkelMeshComp, const UObject* Caller) const {
    return false;
}

bool UFaceFXComponent::IsPlaying(USkeletalMeshComponent* SkelMeshComp, const UObject* Caller) const {
    return false;
}

bool UFaceFXComponent::IsPaused(USkeletalMeshComponent* SkelMeshComp, const UObject* Caller) const {
    return false;
}


