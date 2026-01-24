#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EHbkDifficultyType.h"
#include "HbkEm7500PhaseParameterDifficultyList.h"
#include "HbkEm7500_PhaseParameterAsset.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkEm7500_PhaseParameterAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkDifficultyType, FHbkEm7500PhaseParameterDifficultyList> PhaseParams;
    
    UHbkEm7500_PhaseParameterAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

