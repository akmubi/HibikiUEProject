#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkHologramCharaPostData.h"
#include "HbkHologramCharaPostState.generated.h"

UCLASS(Blueprintable)
class UHbkHologramCharaPostState : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkHologramCharaPostData HologramPostData;
    
public:
    UHbkHologramCharaPostState();

};

