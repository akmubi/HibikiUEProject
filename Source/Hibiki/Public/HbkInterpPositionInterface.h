#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EHbkCharacterDirectionType.h"
#include "HbkInterpPositionInterface.generated.h"

class UAnimMontage;

UINTERFACE(Blueprintable, MinimalAPI)
class UHbkInterpPositionInterface : public UInterface {
    GENERATED_BODY()
};

class IHbkInterpPositionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAnimMontage* PerformInterpPositionAnim(EHbkCharacterDirectionType Direction, bool bShortStep, float PlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAnimMontage* BlendInterpPositionLandingAnim(EHbkCharacterDirectionType Direction, bool bShortStep, float PlayRate, float BlendTime);
    
};

