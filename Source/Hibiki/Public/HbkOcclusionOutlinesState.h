#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkGesPpmOcclusionOutlines.h"
#include "HbkOcclusionOutlinesState.generated.h"

UCLASS(Blueprintable)
class UHbkOcclusionOutlinesState : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkGesPpmOcclusionOutlines Data;
    
public:
    UHbkOcclusionOutlinesState();

};

