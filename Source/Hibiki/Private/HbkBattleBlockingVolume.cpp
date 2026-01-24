#include "HbkBattleBlockingVolume.h"
#include "HbkGameAgentComponent.h"

AHbkBattleBlockingVolume::AHbkBattleBlockingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
}


