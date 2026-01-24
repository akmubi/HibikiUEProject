#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharaInterpPosEndDelegateDelegate.h"
#include "HbkInterpPositionComponent.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkInterpPositionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaInterpPosEndDelegate OnEndedInterpPosition;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShortStepDistance;
    
public:
    UHbkInterpPositionComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnInterpPosEnded();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnInterpPosAnimEnded(UAnimMontage* Montage, bool bInterrupted);
    
};

