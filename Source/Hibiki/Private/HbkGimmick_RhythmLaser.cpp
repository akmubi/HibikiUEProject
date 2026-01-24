#include "HbkGimmick_RhythmLaser.h"
#include "Components/SceneComponent.h"

AHbkGimmick_RhythmLaser::AHbkGimmick_RhythmLaser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->Tags.AddDefaulted(1);
    this->AttackDamageType = NULL;
    this->AttackInfoArray.AddDefaulted(8);
}


