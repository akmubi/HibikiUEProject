#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EHbkDifficultyType.h"
#include "HbkBossAdjustParameter.h"
#include "HbkBossAdjustParameterAsset.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkBossAdjustParameterAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkDifficultyType, FHbkBossAdjustParameter> AdjustParams;
    
    UHbkBossAdjustParameterAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

