#pragma once
#include "CoreMinimal.h"
#include "HbkCineAnimInstance.h"
#include "HbkTkevAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class HIBIKI_API UHbkTkevAnimInstance : public UHbkCineAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtBlendAlpha_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtBlendAlpha_B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtBlendAngleLR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtBlendAngleUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeferredFacialTime;
    
public:
    UHbkTkevAnimInstance();

};

