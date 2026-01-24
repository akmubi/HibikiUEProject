#pragma once
#include "CoreMinimal.h"
#include "HbkIconPointTrigger.h"
#include "HbkMagnetTrigger.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkMagnetTrigger : public AHbkIconPointTrigger {
    GENERATED_BODY()
public:
    AHbkMagnetTrigger(const FObjectInitializer& ObjectInitializer);

};

