#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkHologramPostData.h"
#include "HbkHologramPostState.generated.h"

UCLASS(Blueprintable)
class UHbkHologramPostState : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkHologramPostData HologramPostData;
    
public:
    UHbkHologramPostState();

};

