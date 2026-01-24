#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyAIController.h"
#include "HbkEm0200_AIController.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm0200_AIController : public AHbkEnemyAIController {
    GENERATED_BODY()
public:
    AHbkEm0200_AIController(const FObjectInitializer& ObjectInitializer);

};

