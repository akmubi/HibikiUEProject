#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkToonMotionBlurAfterImageState.generated.h"

class AHbkCharacter;

UCLASS(Blueprintable)
class UHbkToonMotionBlurAfterImageState : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkCharacter* Character;
    
public:
    UHbkToonMotionBlurAfterImageState();

};

