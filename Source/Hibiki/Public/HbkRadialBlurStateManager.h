#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkRadialBlurStateManager.generated.h"

class UHbkRadialBlurDataManager;
class UHbkRadialBlurState;

UCLASS(Blueprintable, Transient)
class UHbkRadialBlurStateManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkRadialBlurState* ActiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkRadialBlurDataManager* DataManager;
    
public:
    UHbkRadialBlurStateManager();

};

