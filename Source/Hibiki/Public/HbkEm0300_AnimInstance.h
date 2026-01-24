#pragma once
#include "CoreMinimal.h"
#include "EUpperBodyType.h"
#include "Em0300_CalcMoveDirectionDelegate.h"
#include "HbkEnemyAnimInstance.h"
#include "HbkEm0300_AnimInstance.generated.h"

class AHbkEm0300_HeavyGunnerG;

UCLASS(Blueprintable, NonTransient)
class UHbkEm0300_AnimInstance : public UHbkEnemyAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEm0300_CalcMoveDirection CalcMoveDirection_Delegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBlendMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUpperBodyType CurrentUpperBodyState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkEm0300_HeavyGunnerG* Em0300;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayingShootingAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayingShootingMontageIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimOffsetPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimOffsetYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddYawUpperBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayingGatringAnim;
    
public:
    UHbkEm0300_AnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void CalcMoveDirectionNotify();
    
};

