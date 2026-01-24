#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkEnemyAnimInstance.h"
#include "HbkEm6000_AnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UHbkEm6000_AnimInstance : public UHbkEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPrevMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMoveRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MoveDirectionLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveDirectionLocalAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisableMoveLerpForStartMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLookMoveTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeedByLookMoveTargetOnStopping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeedByLookMoveTargetOnMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DamagedPartsName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTransforming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadLookIkWeightOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadLookDisableTimer;
    
public:
    UHbkEm6000_AnimInstance();

    UFUNCTION(BlueprintCallable)
    void StopOwneningActorOnTurning();
    
    UFUNCTION(BlueprintCallable)
    void SetLookMoveTargetEnable(bool LookTargetEnable);
    
    UFUNCTION(BlueprintCallable)
    void RotateOwneningActorToMoveTarget();
    
    UFUNCTION(BlueprintCallable)
    void OnNoReactionDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingDamageSlotAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingAttackSlotAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingAnySlotAnimations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingActionSlotAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwneningActorOnTurning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwneningActorOnMoving() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugSetForceMoveEnable(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetForceMoveDirection(const FVector& Direction, float Throttle);
    
};

