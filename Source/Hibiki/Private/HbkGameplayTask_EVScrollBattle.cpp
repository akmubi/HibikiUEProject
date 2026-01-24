#include "HbkGameplayTask_EVScrollBattle.h"

UHbkGameplayTask_EVScrollBattle::UHbkGameplayTask_EVScrollBattle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UHbkGameplayTask_EVScrollBattle::MidiEvent_E5(int32 NoteNo, int32 Velocity) {
}

void UHbkGameplayTask_EVScrollBattle::MidiEvent_C5(int32 NoteNo, int32 Velocity) {
}

void UHbkGameplayTask_EVScrollBattle::LevelScrollStop() {
}

void UHbkGameplayTask_EVScrollBattle::LevelScrollStart() {
}

UHbkGameplayTask_EVScrollBattle* UHbkGameplayTask_EVScrollBattle::EventScrollBattle(UObject* WorldContextObject, float scrollSpeed, float repeatDistance, FGameplayTag playTag, FName mainBasePointCallSign, FName mapBasePointCallSign, FName routeSplineCallSign, FName connectStartCallSign, FName connectEndCallSign, FName playCallSign, TArray<FName> loadAssetLevelNameArray, const bool preLoadLevel, const bool moveRotate, const int32 startPhase) {
    return NULL;
}

void UHbkGameplayTask_EVScrollBattle::ClearYellowPole() {
}

void UHbkGameplayTask_EVScrollBattle::AddRandomCurveLevelScroll(bool LeftAndRight, bool UpAndDown) {
}

void UHbkGameplayTask_EVScrollBattle::AddLevelScroll(TArray<TEnumAsByte<EHbkScrollBattle_ScrollMapKind_t>> addMapKindArray, const bool repeat) {
}


