#pragma once
#include "CoreMinimal.h"
#include "HbkAnimInstance.h"
#include "HbkEm6520_AnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UHbkEm6520_AnimInstance : public UHbkAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBossTornadoPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPartnerTornadoPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendSpaceRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendPosition;
    
public:
    UHbkEm6520_AnimInstance();

};

