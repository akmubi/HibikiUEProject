#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickFloorMoving.h"
#include "HbkGimmick_SlideDeck.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_SlideDeck : public AHbkGimmickFloorMoving {
    GENERATED_BODY()
public:
    AHbkGimmick_SlideDeck(const FObjectInitializer& ObjectInitializer);

};

