#pragma once
#include "CoreMinimal.h"
#include "Em2000AIOnStepPossibleDelegate.h"
#include "HbkBossAIController.h"
#include "HbkEm2000_AIController.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm2000_AIController : public AHbkBossAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEm2000AIOnStepPossible OnStepPossible;
    
public:
    AHbkEm2000_AIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStepSuppressionTime(float Time);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnChangePhase(int32 Phase);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStepPossible() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearStepSuppressionTime();
    
};

