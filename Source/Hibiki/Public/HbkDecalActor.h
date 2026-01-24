#pragma once
#include "CoreMinimal.h"
#include "Engine/DecalActor.h"
#include "HbkDecalActor.generated.h"

UCLASS(Blueprintable)
class AHbkDecalActor : public ADecalActor {
    GENERATED_BODY()
public:
    AHbkDecalActor(const FObjectInitializer& ObjectInitializer);

};

