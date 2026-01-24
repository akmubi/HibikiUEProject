#include "HbkGameplayTask_EVDefeatBattle.h"

UHbkGameplayTask_EVDefeatBattle::UHbkGameplayTask_EVDefeatBattle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SettingsData = NULL;
}

void UHbkGameplayTask_EVDefeatBattle::OnTalkEnded(const FHbkTalkContext TalkContext) {
}

void UHbkGameplayTask_EVDefeatBattle::OnPepDamageBlocked() {
}

void UHbkGameplayTask_EVDefeatBattle::OnMacaronDamage() {
}

void UHbkGameplayTask_EVDefeatBattle::OnChaiDamageBlocked() {
}

UHbkGameplayTask_EVDefeatBattle* UHbkGameplayTask_EVDefeatBattle::EventDefeatBattle(UObject* WorldContextObject, UHbkGameplayTask_EVDefeatBattleSettingsDataAsset* NewSettingsData) {
    return NULL;
}


