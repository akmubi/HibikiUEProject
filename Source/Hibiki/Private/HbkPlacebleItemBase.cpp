#include "HbkPlacebleItemBase.h"
#include "Net/UnrealNetwork.h"

AHbkPlacebleItemBase::AHbkPlacebleItemBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->noRenderMaxTime = 0.00f;
}

void AHbkPlacebleItemBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHbkPlacebleItemBase, UserName);
    DOREPLIFETIME(AHbkPlacebleItemBase, Scale3D);
}


