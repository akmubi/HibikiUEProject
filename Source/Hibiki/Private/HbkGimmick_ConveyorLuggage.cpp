#include "HbkGimmick_ConveyorLuggage.h"
#include "Components/SceneComponent.h"

AHbkGimmick_ConveyorLuggage::AHbkGimmick_ConveyorLuggage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->Tags.AddDefaulted(1);
    this->SplineConveyor = NULL;
    this->FlowPatternIndex = 0;
}

void AHbkGimmick_ConveyorLuggage::TransitionStateStay(int32 StayCount) {
}

void AHbkGimmick_ConveyorLuggage::TransitionStateMove(int32 MoveCount) {
}

void AHbkGimmick_ConveyorLuggage::CreateLuggage() {
}


