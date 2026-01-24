#pragma once
#include "CoreMinimal.h"
#include "HbkPoseableMeshComponent.h"
#include "HbkPlayerDamageSkeletonComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPlayerDamageSkeletonComponent : public UHbkPoseableMeshComponent {
    GENERATED_BODY()
public:
    UHbkPlayerDamageSkeletonComponent(const FObjectInitializer& ObjectInitializer);

};

