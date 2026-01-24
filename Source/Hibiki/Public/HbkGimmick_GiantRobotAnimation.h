#pragma once
#include "CoreMinimal.h"
#include "ActorActivateInterface.h"
#include "HbkCharacter.h"
#include "HbkGimmick_GiantRobotAnimationSlotAnim.h"
#include "HbkGimmick_GiantRobotAnimation.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class AHbkGimmick_GiantRobotAnimation : public AHbkCharacter, public IActorActivateInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_GiantRobotAnimationSlotAnim> SlotAnims;
    
public:
    AHbkGimmick_GiantRobotAnimation(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaySlotAnim(UAnimMontage* AnimMontage, FName SectionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTransitionedName() const;
    

    // Fix for true pure virtual functions not being implemented
};

