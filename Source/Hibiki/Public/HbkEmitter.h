#pragma once
#include "CoreMinimal.h"
#include "Particles/Emitter.h"
#include "HbkEmitter.generated.h"

UCLASS(Blueprintable)
class AHbkEmitter : public AEmitter {
    GENERATED_BODY()
public:
    AHbkEmitter(const FObjectInitializer& ObjectInitializer);

};

