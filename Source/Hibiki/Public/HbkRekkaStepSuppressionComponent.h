#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkRekkaStepSuppressionComponent.generated.h"

class AHbkEnemyAIController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkRekkaStepSuppressionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkEnemyAIController> OwnerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepSuppressionTime;
    
public:
    UHbkRekkaStepSuppressionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStepSuppressionTime(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStepPossible() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearStepSuppressionTime();
    
};

