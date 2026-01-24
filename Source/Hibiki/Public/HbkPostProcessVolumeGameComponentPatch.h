#pragma once
#include "CoreMinimal.h"
#include "HbkPostProcessVolumeGameComponent.h"
#include "HbkPostProcessVolumeGameComponentPatch.generated.h"

UCLASS(Blueprintable, CollapseCategories, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkPostProcessVolumeGameComponentPatch : public UHbkPostProcessVolumeGameComponent {
    GENERATED_BODY()
public:
    UHbkPostProcessVolumeGameComponentPatch(const FObjectInitializer& ObjectInitializer);

};

