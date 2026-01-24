#pragma once
#include "CoreMinimal.h"
#include "HbkGameplayTaskActor.h"
#include "HbkInitializeTaskActor.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkInitializeTaskActor : public AHbkGameplayTaskActor {
    GENERATED_BODY()
public:
    AHbkInitializeTaskActor(const FObjectInitializer& ObjectInitializer);

};

