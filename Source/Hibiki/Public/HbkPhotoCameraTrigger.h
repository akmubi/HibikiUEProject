#pragma once
#include "CoreMinimal.h"
#include "HbkTriggerBox.h"
#include "HbkPhotoCameraTrigger.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkPhotoCameraTrigger : public AHbkTriggerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpDistanceLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Jump2ndDistanceLimit;
    
public:
    AHbkPhotoCameraTrigger(const FObjectInitializer& ObjectInitializer);

};

