#include "HbkGameplayTask_FlickGameEnvState.h"

UHbkGameplayTask_FlickGameEnvState::UHbkGameplayTask_FlickGameEnvState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameEnvState = NULL;
}

UHbkGameplayTask_FlickGameEnvState* UHbkGameplayTask_FlickGameEnvState::EventBeginFlickGameEnvState(UObject* WorldContextObject, FName ChangeGameEnvStateRow, int32 ChangeCnt, float BlendBaseTime, float BlendRandomTime, float InOutWaitBaseTime, float InOutWaitRandomTime, float BlendIntervalBaseTime, float BlendIntervalRandomTime, FGameplayTagContainer GameEnvPhaseActivateTag, FName GameEnvPhaseActivateCallSign, FGameplayTagContainer GameEnvPhaseDeactivateTag, FName GameEnvPhaseDeactivateCallSign, int32 ChangeGameEnvPhaseCnt) {
    return NULL;
}

void UHbkGameplayTask_FlickGameEnvState::EndFlickGameEnvState() {
}


