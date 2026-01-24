#include "HbkAnotherPlayerControlActor.h"

AHbkAnotherPlayerControlActor::AHbkAnotherPlayerControlActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AnotherPlayerCharaClass = NULL;
    this->AnotherPlayerControlMode = EHbkPlayerControlMode::None;
}

void AHbkAnotherPlayerControlActor::RevertControlToPlayerCharacter(bool bTeleportMainPlayer) {
}

void AHbkAnotherPlayerControlActor::GenerateAnotherPlayerCharacter(bool bIsImmediateControl) {
}

void AHbkAnotherPlayerControlActor::DestroyAnotherPlayerCharacter() {
}

void AHbkAnotherPlayerControlActor::ChangeControlToAnotherPlayerCharacter(FTransform NewLocation) {
}


