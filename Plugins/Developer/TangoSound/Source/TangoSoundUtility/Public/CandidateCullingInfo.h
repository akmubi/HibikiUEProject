#pragma once
#include "CoreMinimal.h"
#include "CandidateCullingInfo.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct TANGOSOUNDUTILITY_API FCandidateCullingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    FCandidateCullingInfo();
};

