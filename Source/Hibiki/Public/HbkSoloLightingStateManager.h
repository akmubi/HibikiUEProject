#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkSoloLightingStateManager.generated.h"

class UHbkSoloLightingDataManager;
class UHbkSoloLightingState;

UCLASS(Blueprintable, Transient)
class UHbkSoloLightingStateManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkSoloLightingState* ActiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkSoloLightingDataManager* DataManager;
    
public:
    UHbkSoloLightingStateManager();

};

