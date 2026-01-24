#include "HbkAnimNotify_Em6000SpawnCoinSplash.h"

UHbkAnimNotify_Em6000SpawnCoinSplash::UHbkAnimNotify_Em6000SpawnCoinSplash() {
    this->CoinSplashClass = NULL;
    this->SocketName = TEXT("Origin");
    this->InitVelocity = 0.00f;
    this->Acceleration = 0.00f;
    this->Gravity = 0.00f;
    this->NoteToLifeTime = EHbkNote::None;
    this->NoteCountToLifeTime = 0;
    this->SpawnNum = 1;
    this->SpawnLocationOffset = 0.00f;
    this->SpawnRotationOffset = 0.00f;
}


