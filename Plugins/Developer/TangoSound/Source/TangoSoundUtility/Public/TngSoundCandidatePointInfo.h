#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TngSoundCandidatePointInfo.generated.h"

USTRUCT(BlueprintType)
struct TANGOSOUNDUTILITY_API FTngSoundCandidatePointInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Pos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Density;
    
    FTngSoundCandidatePointInfo();
};

