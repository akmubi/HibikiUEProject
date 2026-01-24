#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkEnemyAnimInstance.h"
#include "HbkEm7500_AnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class HIBIKI_API UHbkEm7500_AnimInstance : public UHbkEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MoveDirectionLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRun;
    
public:
    UHbkEm7500_AnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetRun(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingAnySlotAnimations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwneningActorOnMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnAdditiveDamageReaction();
    
};

