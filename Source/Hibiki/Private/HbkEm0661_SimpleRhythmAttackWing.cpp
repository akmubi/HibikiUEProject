#include "HbkEm0661_SimpleRhythmAttackWing.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"

AHbkEm0661_SimpleRhythmAttackWing::AHbkEm0661_SimpleRhythmAttackWing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->AkCompMain = CreateDefaultSubobject<UAkComponent>(TEXT("AkCompMain"));
    this->AkCompMain->SetupAttachment(RootComponent);
}


