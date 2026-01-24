#pragma once
#include "CoreMinimal.h"
#include "AkCandidateVolume.h"
#include "CandidateCullingInfo.h"
#include "AkCandidateCullingVolume.generated.h"

UCLASS(Blueprintable)
class TANGOSOUNDUTILITY_API AAkCandidateCullingVolume : public AAkCandidateVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCandidateCullingInfo> CullingInfos;
    
    AAkCandidateCullingVolume(const FObjectInitializer& ObjectInitializer);

};

