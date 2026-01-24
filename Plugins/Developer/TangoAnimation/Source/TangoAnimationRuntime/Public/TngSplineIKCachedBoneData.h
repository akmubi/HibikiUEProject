#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "TngSplineIKCachedBoneData.generated.h"

USTRUCT(BlueprintType)
struct FTngSplineIKCachedBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefSkeletonIndex;
    
    TANGOANIMATIONRUNTIME_API FTngSplineIKCachedBoneData();
};

