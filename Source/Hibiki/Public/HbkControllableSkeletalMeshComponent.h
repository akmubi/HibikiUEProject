#pragma once
#include "CoreMinimal.h"
#include "HbkSkeletalMeshComponent.h"
#include "HbkControllableSkeletalMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkControllableSkeletalMeshComponent : public UHbkSkeletalMeshComponent {
    GENERATED_BODY()
public:
    UHbkControllableSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

};

