#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EHbkDifficultyType.h"
#include "HbkEm6000_PhaseFixedParameter.h"
#include "HbkEm6000_PhaseParameterDifficultyList.h"
#include "HbkFHbkEm6000_ParameterAsset.generated.h"

UCLASS(Blueprintable)
class UHbkFHbkEm6000_ParameterAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm6000_PhaseFixedParameter> PhaseFixedParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkDifficultyType, FHbkEm6000_PhaseParameterDifficultyList> PhaseParams;
    
    UHbkFHbkEm6000_ParameterAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

