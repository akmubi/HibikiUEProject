#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkEm6000_IntermissionTaskBase.h"
#include "HbkEm6000_IntermissionTaskPhase4.generated.h"

class UAkAudioEvent;
class UAnimMontage;

UCLASS(Blueprintable)
class AHbkEm6000_IntermissionTaskPhase4 : public AHbkEm6000_IntermissionTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TransformHumanDamageAnimEm6500;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Phase4StateEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HatchInTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerDistance;
    
public:
    AHbkEm6000_IntermissionTaskPhase4(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnEndFinishCamera();
    
};

