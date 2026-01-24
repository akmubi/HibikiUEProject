#include "HbkPlaceableItem.h"
#include "Net/UnrealNetwork.h"

AHbkPlaceableItem::AHbkPlaceableItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->noRenderMaxTime = 0.00f;
    this->bDeactiveStart = false;
    this->ContactMode = EHbkItemContactMode::Standard;
    this->bEnableAsGlobalItem = false;
    this->PlcItemState = 0;
    this->ContactReactionSound = NULL;
}





void AHbkPlaceableItem::EnableGameFlag() {
}

void AHbkPlaceableItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHbkPlaceableItem, UserName);
    DOREPLIFETIME(AHbkPlaceableItem, Scale3D);
}


