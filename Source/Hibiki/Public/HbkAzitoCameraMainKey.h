#pragma once
#include "CoreMinimal.h"
#include "HbkAzitoCameraKey.h"
#include "HbkAzitoCameraMainKey.generated.h"

UCLASS(Blueprintable, NonTransient)
class HIBIKI_API AHbkAzitoCameraMainKey : public AHbkAzitoCameraKey {
    GENERATED_BODY()
public:
    AHbkAzitoCameraMainKey(const FObjectInitializer& ObjectInitializer);

};

