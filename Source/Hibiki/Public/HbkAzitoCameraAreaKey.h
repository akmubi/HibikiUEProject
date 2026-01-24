#pragma once
#include "CoreMinimal.h"
#include "HbkAzitoCameraKey.h"
#include "HbkAzitoCameraAreaKey.generated.h"

UCLASS(Blueprintable, NonTransient)
class HIBIKI_API AHbkAzitoCameraAreaKey : public AHbkAzitoCameraKey {
    GENERATED_BODY()
public:
    AHbkAzitoCameraAreaKey(const FObjectInitializer& ObjectInitializer);

};

