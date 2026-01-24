#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyAIController.h"
#include "HbkEm0450_AIController.generated.h"

UCLASS(Blueprintable)
class AHbkEm0450_AIController : public AHbkEnemyAIController {
    GENERATED_BODY()
public:
    AHbkEm0450_AIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool IsWeaponAttached();
    
    UFUNCTION(BlueprintCallable)
    bool IsThrowingSpear();
    
    UFUNCTION(BlueprintCallable)
    bool CanGrantBarrier();
    
};

