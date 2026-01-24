#include "HbkAttackAreaVolume.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AHbkAttackAreaVolume::AHbkAttackAreaVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->AttackableVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("AttackableVolume"));
    this->CellScale = 600.00f;
    this->AttackableVolume->SetupAttachment(RootComponent);
}


