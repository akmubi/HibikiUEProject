#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkToonMaskingStateManager.generated.h"

class UHbkToonMaskingDataManager;
class UHbkToonMaskingState;

UCLASS(Blueprintable, Transient)
class UHbkToonMaskingStateManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkToonMaskingState* State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkToonMaskingDataManager* DataManager;
    
public:
    UHbkToonMaskingStateManager();

};

