#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AkCandidatePointComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TANGOSOUNDUTILITY_API UAkCandidatePointComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UAkCandidatePointComponent(const FObjectInitializer& ObjectInitializer);

};

