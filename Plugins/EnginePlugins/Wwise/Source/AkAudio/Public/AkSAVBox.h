#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "AkSAVBox.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API AAkSAVBox : public ATriggerBox {
    GENERATED_BODY()
public:
    AAkSAVBox(const FObjectInitializer& ObjectInitializer);

};

