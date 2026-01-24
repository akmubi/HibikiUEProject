#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyAIController.h"
#include "HbkEm0210_AIController.generated.h"

UCLASS(Blueprintable)
class AHbkEm0210_AIController : public AHbkEnemyAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackLoopCount;
    
public:
    AHbkEm0210_AIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAttackLoopCount() const;
    
};

