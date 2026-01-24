#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkRadialBlurData.h"
#include "HbkRadialBlurState.generated.h"

UCLASS(Blueprintable)
class UHbkRadialBlurState : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRadialBlurData RadialBlurData;
    
public:
    UHbkRadialBlurState();

};

