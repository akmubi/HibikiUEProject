#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_RhythmAnimationMesh.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FHbkGimmick_RhythmAnimationMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RhythmMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* RhythmMeshComp;
    
    HIBIKI_API FHbkGimmick_RhythmAnimationMesh();
};

