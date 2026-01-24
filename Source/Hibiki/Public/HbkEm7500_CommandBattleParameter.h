#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EHbkDifficultyType.h"
#include "HbkEm7500CommandBattleParameter.h"
#include "HbkEm7500_CommandBattleParameter.generated.h"

UCLASS(Blueprintable)
class UHbkEm7500_CommandBattleParameter : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkDifficultyType, FHbkEm7500CommandBattleParameter> CommandBattleParams;
    
    UHbkEm7500_CommandBattleParameter();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

