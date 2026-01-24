#include "HbkGimmickFloor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AHbkGimmickFloor::AHbkGimmickFloor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->Tags.AddDefaulted(1);
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapArea"));
    this->BoxComponent->SetupAttachment(RootComponent);
}

void AHbkGimmickFloor::OnSyncPrepare() {
}

bool AHbkGimmickFloor::IsActorOnFloor() {
    return false;
}

AActor* AHbkGimmickFloor::GetActorOnFloor() {
    return NULL;
}


