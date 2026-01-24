#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_BPMRushSpectrumAssignParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_BPMRushSpectrumAssignParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAssing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AssignMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssignStartSpectrumIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssignEndSpectrumIndex;
    
    HIBIKI_API FHbkGimmick_BPMRushSpectrumAssignParam();
};

