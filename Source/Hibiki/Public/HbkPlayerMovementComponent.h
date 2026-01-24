#pragma once
#include "CoreMinimal.h"
#include "HbkCharacterMovementComponent.h"
#include "PlayerMoveActionDelegateDelegate.h"
#include "PlayerMoveRhythmJumpDelegateDelegate.h"
#include "HbkPlayerMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPlayerMovementComponent : public UHbkCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerMoveRhythmJumpDelegate OnChangeRhythmJumpMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerMoveActionDelegate OnEventMoveEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerMoveActionDelegate OnInterpMoveEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpVelocity2nd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityScale2nd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxJumpVelocityZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MoveAnimCurveName;
    
public:
    UHbkPlayerMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRhythmJumping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ISAirDashMode() const;
    
};

