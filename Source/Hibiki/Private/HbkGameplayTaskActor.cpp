#include "HbkGameplayTaskActor.h"
#include "HbkGameplayTasksComponent.h"

AHbkGameplayTaskActor::AHbkGameplayTaskActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GTComp = CreateDefaultSubobject<UHbkGameplayTasksComponent>(TEXT("GameplayTasksComp"));
}


