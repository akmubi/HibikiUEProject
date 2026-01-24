#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "HbkTalkEventEditKey.generated.h"

UCLASS(Blueprintable, Transient)
class HIBIKI_API AHbkTalkEventEditKey : public ATargetPoint {
    GENERATED_BODY()
public:
    AHbkTalkEventEditKey(const FObjectInitializer& ObjectInitializer);

};

