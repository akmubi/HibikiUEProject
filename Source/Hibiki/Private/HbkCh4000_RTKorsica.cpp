#include "HbkCh4000_RTKorsica.h"

AHbkCh4000_RTKorsica::AHbkCh4000_RTKorsica(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->pAppearanceSE = NULL;
    this->pDisappearanceSE = NULL;
}

void AHbkCh4000_RTKorsica::OnInteraction(AActor* Interactor) {
}


