#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "HbkActionParam.h"
#include "HbkAnimInstParam.h"
#include "HbkAnimInstance.h"
#include "HbkCharacterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class HIBIKI_API UHbkCharacterAnimInstance : public UHbkAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStrafing;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkActionParam ActionParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAnimInstParam SavedAIP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AGP_MoveThrottle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AGP_LocalMoveDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AGP_WorldMoveDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AGP_LocalYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FaceFXBlendAlpha;
    
public:
    UHbkCharacterAnimInstance();

    UFUNCTION(BlueprintCallable)
    void UpdateRootMotionCurveMove(float DeltaSeconds, bool bSweep);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCurveMoveTransform();
    
    UFUNCTION(BlueprintCallable)
    void SetStrafeEnable(bool StrafeEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveVelocityScale(float NewScale);
    
    UFUNCTION(BlueprintCallable)
    void SetActionTag(FGameplayTag ActTag, FHbkActionParam ActParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PerformAction();
    
    UFUNCTION(BlueprintCallable)
    void InputMoveDirection(FVector WorldDirection, float Speed);
    
    UFUNCTION(BlueprintCallable)
    FVector GetMoveVelocityScaleVector();
    
};

