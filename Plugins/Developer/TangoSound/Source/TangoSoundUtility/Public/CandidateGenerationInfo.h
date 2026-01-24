#pragma once
#include "CoreMinimal.h"
#include "CandidateGenerationInfo.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct TANGOSOUNDUTILITY_API FCandidateGenerationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    FCandidateGenerationInfo();
};

