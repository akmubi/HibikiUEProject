#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "HbkAzitoCameraKey.generated.h"

UCLASS(Blueprintable, Transient)
class HIBIKI_API AHbkAzitoCameraKey : public ATargetPoint {
    GENERATED_BODY()
public:
    AHbkAzitoCameraKey(const FObjectInitializer& ObjectInitializer);

};

