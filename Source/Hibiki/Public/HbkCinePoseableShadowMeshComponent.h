#pragma once
#include "CoreMinimal.h"
#include "HbkPoseableMeshComponent.h"
#include "HbkCinePoseableShadowMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkCinePoseableShadowMeshComponent : public UHbkPoseableMeshComponent {
    GENERATED_BODY()
public:
    UHbkCinePoseableShadowMeshComponent(const FObjectInitializer& ObjectInitializer);

};

