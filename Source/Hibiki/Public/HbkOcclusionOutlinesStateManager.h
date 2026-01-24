#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkOcclusionOutlinesStateManager.generated.h"

class UHbkOcclusionOutlinesState;

UCLASS(Blueprintable, Transient)
class UHbkOcclusionOutlinesStateManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkOcclusionOutlinesState* ActiveState;
    
public:
    UHbkOcclusionOutlinesStateManager();

};

