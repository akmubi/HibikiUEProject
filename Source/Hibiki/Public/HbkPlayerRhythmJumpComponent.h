#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PlayerRhythmActionDelegateDelegate.h"
#include "PlayerRhythmJumpDelegateDelegate.h"
#include "HbkPlayerRhythmJumpComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPlayerRhythmJumpComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmJumpDelegate OnRhythmJumpModeStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmJumpDelegate OnRhythmJumpCountDown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmJumpDelegate OnRhythmJumpFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmActionDelegate OnRhythmJumpBeginJump;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmActionDelegate OnRhythmJumpEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmActionDelegate OnRhythmJumpOverLandingHeight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmActionDelegate OnRhythmJumpReachedJumpApex;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmActionDelegate OnRhythmJumpSuccessLanding;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmJumpDelegate OnRhythmJumpSuccessInput;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmActionDelegate OnRhythmJumpSuccessLastInput;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D UIOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UIScale;
    
public:
    UHbkPlayerRhythmJumpComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOwnerMovementUpdated(float DeltaSeconds, FVector OldLocation, FVector OldVelocity);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeControlAP();
    
    UFUNCTION(BlueprintCallable)
    void ChangeRhythmJumpMode(int32 JumpCount);
    
};

