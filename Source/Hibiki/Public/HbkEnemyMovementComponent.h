#pragma once
#include "CoreMinimal.h"
#include "HbkCharacterMovementComponent.h"
#include "HbkEnemyMovementComponent.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkEnemyMovementComponent : public UHbkCharacterMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputStrafeInterpSpeed;
    
public:
    UHbkEnemyMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopEnemyMovement(bool bRestartStandby);
    
    UFUNCTION(BlueprintCallable)
    void RestartEnemyMovement();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Notify_MontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
public:
    UFUNCTION(BlueprintCallable)
    void Input_StrafeMove(float InputRate);
    
};

