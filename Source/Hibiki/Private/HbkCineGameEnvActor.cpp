#include "HbkCineGameEnvActor.h"

AHbkCineGameEnvActor::AHbkCineGameEnvActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCutsceneCutChangeSkipRestore = false;
    this->CineGameEnvState = NULL;
}


