#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyAnimInstance.h"
#include "HbkEm0710_AnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UHbkEm0710_AnimInstance : public UHbkEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledFlyingStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyingAttackBackRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledFlyingAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyingAttackForwardRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFlyingAttackDuration;
    
public:
    UHbkEm0710_AnimInstance();

};

