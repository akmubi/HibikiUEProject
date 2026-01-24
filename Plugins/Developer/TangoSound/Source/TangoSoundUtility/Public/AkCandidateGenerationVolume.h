#pragma once
#include "CoreMinimal.h"
#include "AkCandidateVolume.h"
#include "CandidateGenerationInfo.h"
#include "AkCandidateGenerationVolume.generated.h"

UCLASS(Blueprintable)
class TANGOSOUNDUTILITY_API AAkCandidateGenerationVolume : public AAkCandidateVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCandidateGenerationInfo> GenerationInfos;
    
    AAkCandidateGenerationVolume(const FObjectInitializer& ObjectInitializer);

};

