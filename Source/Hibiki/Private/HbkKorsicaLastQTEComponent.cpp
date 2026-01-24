#include "HbkKorsicaLastQTEComponent.h"

UHbkKorsicaLastQTEComponent::UHbkKorsicaLastQTEComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->KorsicaQTESuccessSE = NULL;
    this->KorsicaQTEFailedSE = NULL;
}

void UHbkKorsicaLastQTEComponent::Receive_OnSuccessQTE(bool bPerfect) {
}

void UHbkKorsicaLastQTEComponent::Receive_OnFailedQTE() {
}


