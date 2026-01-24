#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EHbkDifficultyType.h"
#include "HbkEm5000PhaseParameterDifficultyList.h"
#include "HbkFHbkEm5000ParameterAsset.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkFHbkEm5000ParameterAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkDifficultyType, FHbkEm5000PhaseParameterDifficultyList> PhaseParams;
    
    UHbkFHbkEm5000ParameterAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

