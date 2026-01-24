#pragma once
#include "CoreMinimal.h"
#include "HbkPoseableMeshComponent.h"
#include "HbkPlayerPoseableShadowMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPlayerPoseableShadowMeshComponent : public UHbkPoseableMeshComponent {
    GENERATED_BODY()
public:
    UHbkPlayerPoseableShadowMeshComponent(const FObjectInitializer& ObjectInitializer);

};

