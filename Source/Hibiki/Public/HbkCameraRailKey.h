#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "HbkCameraRailKey.generated.h"

UCLASS(Blueprintable, Transient)
class HIBIKI_API AHbkCameraRailKey : public ATargetPoint {
    GENERATED_BODY()
public:
    AHbkCameraRailKey(const FObjectInitializer& ObjectInitializer);

};

