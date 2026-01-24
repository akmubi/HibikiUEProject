#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EHbkDifficultyType.h"
#include "HbkEm6000CommandBattleParameter.h"
#include "HbkEm6000_CommandBattleParameterAsset.generated.h"

UCLASS(Blueprintable)
class UHbkEm6000_CommandBattleParameterAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkDifficultyType, FHbkEm6000CommandBattleParameter> CommandBattleParams;
    
    UHbkEm6000_CommandBattleParameterAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

