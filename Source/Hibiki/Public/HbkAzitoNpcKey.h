#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "HbkAzitoNpcKey.generated.h"

UCLASS(Blueprintable, Transient)
class HIBIKI_API AHbkAzitoNpcKey : public ATargetPoint {
    GENERATED_BODY()
public:
    AHbkAzitoNpcKey(const FObjectInitializer& ObjectInitializer);

};

