#pragma once
#include "CoreMinimal.h"
#include "HbkEm6000_IntermissionTaskBase.h"
#include "HbkEm6000_IntermissionTaskPhase2.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class AHbkEm6000_IntermissionTaskPhase2 : public AHbkEm6000_IntermissionTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TransformHumanDamageAnimEm6500;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerDistance;
    
public:
    AHbkEm6000_IntermissionTaskPhase2(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnEndFinishCamera();
    
};

