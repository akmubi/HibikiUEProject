#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "HbkSkeletalMeshActor.generated.h"

UCLASS(Blueprintable)
class AHbkSkeletalMeshActor : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
    AHbkSkeletalMeshActor(const FObjectInitializer& ObjectInitializer);

};

