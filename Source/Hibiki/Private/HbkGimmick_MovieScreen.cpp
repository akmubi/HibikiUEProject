#include "HbkGimmick_MovieScreen.h"

AHbkGimmick_MovieScreen::AHbkGimmick_MovieScreen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
}

void AHbkGimmick_MovieScreen::MovieStartFunc(UTexture* NewMediaTexture) {
}

void AHbkGimmick_MovieScreen::MovieEndFunc() {
}

void AHbkGimmick_MovieScreen::MovieCloseFunc() {
}


