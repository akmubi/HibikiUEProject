#include "HbkHideOutChallengeFunction.h"

UHbkHideOutChallengeFunction::UHbkHideOutChallengeFunction() {
}

void UHbkHideOutChallengeFunction::UpdateUnlockAll(UObject* WorldContextObject) {
}

void UHbkHideOutChallengeFunction::SetHideOutChallengeNewUnlockFlagOff(UObject* WorldContextObject, FName ChallengeKey) {
}

void UHbkHideOutChallengeFunction::SetHideOutChallengeNewUnlockFlagAllOff(UObject* WorldContextObject) {
}

void UHbkHideOutChallengeFunction::SetHideOutChallengeNewOpenFlagOff(UObject* WorldContextObject, FName ChallengeKey) {
}

void UHbkHideOutChallengeFunction::SetHideOutChallengeNewOpenFlagAllOff(UObject* WorldContextObject) {
}

void UHbkHideOutChallengeFunction::OpenHideOutChallenge(UObject* WorldContextObject, EHbkHideOutChallengeOpenConditionBits OpenConditionBit) {
}

bool UHbkHideOutChallengeFunction::IsHideOutChallengeNewUnlocked(UObject* WorldContextObject, EHbkHideOutChallengeCategory ChallengeCategory) {
    return false;
}

bool UHbkHideOutChallengeFunction::IsHideOutChallengeNewOpened(UObject* WorldContextObject, EHbkHideOutChallengeCategory ChallengeCategory) {
    return false;
}

void UHbkHideOutChallengeFunction::GetHideOutChallengeTbl(UObject* WorldContextObject, TArray<FName>& ChallengeKeyTbl, EHbkHideOutChallengeCategory ChallengeCategory) {
}

void UHbkHideOutChallengeFunction::GetHideOutChallengeData(UObject* WorldContextObject, FHbkHideOutChallengeParamRow& Param, FHbkHideOutChallengeProgressChallengeParam& Progress, FHbkHideOutChallengeWorkChallengeParam& WorkParam, FName ChallengeKey) {
}

void UHbkHideOutChallengeFunction::GetHideOutChallengeArtTbl(UObject* WorldContextObject, TMap<FName, FHbkHideOutChallengeArtParamRow>& ArtTbl, EHbkHideOutChallengeCategory ChallengeCategory) {
}

void UHbkHideOutChallengeFunction::AcceptHideOutChallengeReward(UObject* WorldContextObject, FName ChallengeKey) {
}


