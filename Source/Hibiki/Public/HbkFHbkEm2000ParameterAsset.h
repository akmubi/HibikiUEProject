#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EHbkDifficultyType.h"
#include "HbkEm2000PhaseParameterDifficultyList.h"
#include "HbkFHbkEm2000ParameterAsset.generated.h"

UCLASS(Blueprintable)
class UHbkFHbkEm2000ParameterAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkDifficultyType, FHbkEm2000PhaseParameterDifficultyList> PhaseParams;
    
    UHbkFHbkEm2000ParameterAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

