#pragma once
#include "CoreMinimal.h"
#include "FaceFXAnimId.h"
#include "FaceFXSkelMeshComponentId.h"
#include "FaceFXAnimComponentSet.generated.h"

class UFaceFXAnim;

USTRUCT(BlueprintType)
struct FFaceFXAnimComponentSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFaceFXSkelMeshComponentId SkelMeshComponentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFaceFXAnimId AnimationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFaceFXAnim> Animation;
    
    FACEFX_API FFaceFXAnimComponentSet();
};

