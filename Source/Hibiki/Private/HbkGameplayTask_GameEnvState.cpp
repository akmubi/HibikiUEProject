#include "HbkGameplayTask_GameEnvState.h"

UHbkGameplayTask_GameEnvState::UHbkGameplayTask_GameEnvState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameEnvState = NULL;
}

UHbkGameplayTask_GameEnvState* UHbkGameplayTask_GameEnvState::EventBeginGameEnvState(UObject* WorldContextObject, FName ChangeGameEnvStateRow, float BlendTime) {
    return NULL;
}

void UHbkGameplayTask_GameEnvState::EndGameEnvState(float EndBlendTime) {
}


