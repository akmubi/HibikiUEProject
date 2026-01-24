#include "HibikiGameInstance.h"
#include "Net/UnrealNetwork.h"

UHibikiGameInstance::UHibikiGameInstance() {
    this->MasterFadeControlClass = NULL;
    this->NumPlayerWhenGameStart = 0;
    this->MasterFadeControl = NULL;
    this->PSNActivityControllerClass = NULL;
    this->PSNActivityController = NULL;
}


void UHibikiGameInstance::SetPendingReturnToMainMenu(const FText& MessageText) {
}

UHibikiGameInstance* UHibikiGameInstance::K2_GetHibikiGameInstance(UObject* WorldContextObject) {
    return NULL;
}

FString UHibikiGameInstance::K2_GetBuildVersionAndDate() {
    return TEXT("");
}

FString UHibikiGameInstance::K2_GetBuildVersion() {
    return TEXT("");
}



void UHibikiGameInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHibikiGameInstance, NumPlayerWhenGameStart);
}


