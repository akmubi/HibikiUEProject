#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkHitImpactStateManager.generated.h"

class UHbkHitImpactDataManager;
class UHbkHitImpactState;

UCLASS(Blueprintable, Transient)
class UHbkHitImpactStateManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkHitImpactState* ActiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkHitImpactDataManager* DataManager;
    
public:
    UHbkHitImpactStateManager();

};

