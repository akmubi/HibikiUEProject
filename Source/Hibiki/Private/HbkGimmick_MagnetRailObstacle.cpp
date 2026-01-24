#include "HbkGimmick_MagnetRailObstacle.h"
#include "Components/SceneComponent.h"

AHbkGimmick_MagnetRailObstacle::AHbkGimmick_MagnetRailObstacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->AvoidType = EHbkGimmick_MagnetRailObstacleAvoidType::None;
    this->bCanUseOffset = false;
    this->PassSeRef = NULL;
    this->NoteCount = 0;
    this->Distance = 0.00f;
}


