#include "HbkEm0210_SideStory.h"

AHbkEm0210_SideStory::AHbkEm0210_SideStory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AHbkEm0210_SideStory::RequestMoveJump(FVector InMovePos, bool bIsLeaving) {
}

void AHbkEm0210_SideStory::RequestMove(FVector InMovePos, float InAcceptanceRadius, bool bLastMove) {
}

bool AHbkEm0210_SideStory::IsShootingFlame() const {
    return false;
}

bool AHbkEm0210_SideStory::IsLastMove() const {
    return false;
}

FVector AHbkEm0210_SideStory::GetRequestJumpLocation() const {
    return FVector{};
}

bool AHbkEm0210_SideStory::GetDeathRequest() const {
    return false;
}


