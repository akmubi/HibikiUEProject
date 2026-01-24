#include "AkDynamicDialogueSound.h"
#include "AkDynamicDialogueComponent.h"

AAkDynamicDialogueSound::AAkDynamicDialogueSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkDynamicDialogueComponent = CreateDefaultSubobject<UAkDynamicDialogueComponent>(TEXT("AkDynamicDialogueComponent"));
}


