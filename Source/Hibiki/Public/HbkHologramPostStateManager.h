#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkHologramPostStateManager.generated.h"

class UHbkHologramPostDataManager;
class UHbkHologramPostState;

UCLASS(Blueprintable, Transient)
class UHbkHologramPostStateManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkHologramPostState* ActiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkHologramPostDataManager* DataManager;
    
public:
    UHbkHologramPostStateManager();

};

