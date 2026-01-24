#pragma once
#include "CoreMinimal.h"
#include "ECentaur_SpearAttackType.h"
#include "ECentaur_SpearState.h"
#include "HbkAnimInstance.h"
#include "HbkEm0451_AnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UHbkEm0451_AnimInstance : public UHbkAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDamage;
    
public:
    UHbkEm0451_AnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetSpearState(ECentaur_SpearState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetSpearAttackType(ECentaur_SpearAttackType NewType);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerIsMoving(const bool IsMoving);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageAngle(const float NewDamageAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECentaur_SpearState GetSpearState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECentaur_SpearAttackType GetSpearAttackType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOwnerIsMoving() const;
    
};

