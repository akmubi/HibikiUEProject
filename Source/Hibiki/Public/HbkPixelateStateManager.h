#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkPixelateStateManager.generated.h"

class UHbkPixelateDataManager;
class UHbkPixelateState;

UCLASS(Blueprintable, Transient)
class UHbkPixelateStateManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkPixelateState* ActiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkPixelateDataManager* DataManager;
    
public:
    UHbkPixelateStateManager();

};

