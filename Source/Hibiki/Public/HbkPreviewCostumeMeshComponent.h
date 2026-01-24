#pragma once
#include "CoreMinimal.h"
#include "HbkCostumeMeshComponent.h"
#include "HbkPreviewCostumeMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPreviewCostumeMeshComponent : public UHbkCostumeMeshComponent {
    GENERATED_BODY()
public:
    UHbkPreviewCostumeMeshComponent(const FObjectInitializer& ObjectInitializer);

};

