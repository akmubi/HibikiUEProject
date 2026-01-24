#include "AkDynamicDialogueComponent.h"

UAkDynamicDialogueComponent::UAkDynamicDialogueComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SequenceType = AkDynamicSequenceType::NormalTransition;
}

void UAkDynamicDialogueComponent::StopQueue(int32 FadeTimeMs) {
}

void UAkDynamicDialogueComponent::ResumeQueue(int32 FadeTimeMs) {
}

void UAkDynamicDialogueComponent::RemoveQueue(int32 NodeID) {
}

void UAkDynamicDialogueComponent::RemoveAllQueue() {
}

void UAkDynamicDialogueComponent::PlayQueue(int32 FadeTimeMs) {
}

void UAkDynamicDialogueComponent::PauseQueue(int32 FadeTimeMs) {
}

void UAkDynamicDialogueComponent::GetPlayingItem(FAkDynamicDialogueNodeInfo& Item) {
}

void UAkDynamicDialogueComponent::GetPauseTimes(int32& out_TimeMs, int32& out_Duration) {
}

void UAkDynamicDialogueComponent::GetAllItems(TArray<FAkDynamicDialogueNodeInfo>& Items) {
}

void UAkDynamicDialogueComponent::BreakQueue() {
}

int32 UAkDynamicDialogueComponent::AddQueue(UAkDynamicDialogueEvent* in_AkEvent, const TArray<FString>& in_Args, int32 DelayTimeMs) {
    return 0;
}


