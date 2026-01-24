#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "HbkCineAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class HIBIKI_API UHbkCineAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FaceFXBlendAlpha;
    
public:
    UHbkCineAnimInstance();

};

