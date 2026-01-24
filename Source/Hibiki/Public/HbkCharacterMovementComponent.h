#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "CharaMoveNotifyDelegateDelegate.h"
#include "HbkMovementRepParam.h"
#include "HbkCharacterMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaMoveNotifyDelegate OnEndFlight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaMoveNotifyDelegate OnInAir;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaMoveNotifyDelegate OnStartFalling;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaMoveNotifyDelegate OnEndedInterpPosition;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKnockbackEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefWalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RunMoveMode, meta=(AllowPrivateAccess=true))
    FHbkMovementRepParam MovementRepParam;
    
public:
    UHbkCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetMoveWalk();
    
    UFUNCTION(BlueprintCallable)
    void SetMoveRun();
    
    UFUNCTION(BlueprintCallable)
    void SetKnockback(FVector KnockbackDir, float Knockback);
    
    UFUNCTION(BlueprintCallable)
    void SetFlightDuration(float Duration);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RunMoveMode();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoveRun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDuringFlight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAirMovementMode() const;
    
};

