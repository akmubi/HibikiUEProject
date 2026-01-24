#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "AkPortalBox.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API AAkPortalBox : public ATriggerBox {
    GENERATED_BODY()
public:
    AAkPortalBox(const FObjectInitializer& ObjectInitializer);

};

