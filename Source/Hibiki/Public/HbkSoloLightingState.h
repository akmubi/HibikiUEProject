#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkSoloLightingData.h"
#include "HbkSoloLightingState.generated.h"

UCLASS(Blueprintable)
class UHbkSoloLightingState : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkSoloLightingData Data;
    
public:
    UHbkSoloLightingState();

};

