#include "HbkGameplayTask_BeforeStartBattle.h"

UHbkGameplayTask_BeforeStartBattle::UHbkGameplayTask_BeforeStartBattle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreBattleWidget = NULL;
}

void UHbkGameplayTask_BeforeStartBattle::OnPrepareBattle() {
}

void UHbkGameplayTask_BeforeStartBattle::NoteSyncQuarter(int32 NoteCount, bool bDownBeat) {
}

UHbkGameplayTask_BeforeStartBattle* UHbkGameplayTask_BeforeStartBattle::BeforeStartBattle(UObject* WorldContextObject) {
    return NULL;
}


