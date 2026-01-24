#include "HbkNpcCharacter.h"
#include "HbkBeatSignComponent.h"

AHbkNpcCharacter::AHbkNpcCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeatSignComp = CreateDefaultSubobject<UHbkBeatSignComponent>(TEXT("BeatSign"));
    this->useSignificance = false;
    this->significanceDisp = false;
    this->significanceDist = -1.00f;
    this->noRenderMaxTime = 0.00f;
    this->minTickInterval = -1.00f;
    this->IsSignificanceStateActive = false;
}


