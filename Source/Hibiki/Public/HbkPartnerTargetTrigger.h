#pragma once
#include "CoreMinimal.h"
#include "HbkIconPointTrigger.h"
#include "HbkPartnerTargetTrigger.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkPartnerTargetTrigger : public AHbkIconPointTrigger {
    GENERATED_BODY()
public:
    AHbkPartnerTargetTrigger(const FObjectInitializer& ObjectInitializer);

};

