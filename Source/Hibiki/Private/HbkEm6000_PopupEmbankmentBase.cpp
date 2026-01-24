#include "HbkEm6000_PopupEmbankmentBase.h"
#include "HbkCoinBlockerComponent.h"
#include "HbkRhythmSynchroComponent.h"

AHbkEm6000_PopupEmbankmentBase::AHbkEm6000_PopupEmbankmentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RhythmSynchroComponent = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->CoinBlockerComponent = CreateDefaultSubobject<UHbkCoinBlockerComponent>(TEXT("CoinBlocker"));
}


