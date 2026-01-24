#include "HbkGimmick_ExhbSpotLightContoller.h"

AHbkGimmick_ExhbSpotLightContoller::AHbkGimmick_ExhbSpotLightContoller(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
}

void AHbkGimmick_ExhbSpotLightContoller::StopFollowing() {
}

void AHbkGimmick_ExhbSpotLightContoller::StartFollowing(AActor* FollowActor, FName FollowBoneName) {
}


