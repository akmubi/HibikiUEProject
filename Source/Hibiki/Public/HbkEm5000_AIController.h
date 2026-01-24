#pragma once
#include "CoreMinimal.h"
#include "HbkBossAIController.h"
#include "HbkEm5000_AIController.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm5000_AIController : public AHbkBossAIController {
    GENERATED_BODY()
public:
    AHbkEm5000_AIController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnChangePhase(int32 Phase);
    
};

