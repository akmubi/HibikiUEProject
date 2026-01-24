#include "AkCandidateComponent.h"

UAkCandidateComponent::UAkCandidateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ListSelectMode = TngSoundCandidateListSelectionMode::CoordinateDirection;
    this->PositionSelectMode = TngSoundCandidatePositionSelectionMode::NearestOnly;
    this->AkAudioEvent = NULL;
    this->AutoPost = false;
    this->ListDistance = 10000.00f;
    this->ListUpdateInterval = 2.00f;
    this->TickInterval = 0.20f;
    this->FarestOnceProhibitionDistance = 500.00f;
    this->OcclusionCollisionChannel = ECC_Visibility;
    this->ChangeRoomType = AkChangeRoomType::Always;
}

void UAkCandidateComponent::Stop() {
}

void UAkCandidateComponent::Start() {
}

void UAkCandidateComponent::SetAllPositions(const TArray<FTngSoundCandidatePointInfo>& Positions) {
}


