#include "HbkLocalPlayer.h"

UHbkLocalPlayer::UHbkLocalPlayer() {
    this->AspectRatioAxisConstraint = AspectRatio_MaintainYFOV;
    this->PlayerProfile = NULL;
    this->GamerIconTexture = NULL;
}

void UHbkLocalPlayer::HandleProfileLoadErrorDialogContinue() {
}


