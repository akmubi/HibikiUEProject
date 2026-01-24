#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkGameplayTask_EVLabBattle.h"
#include "HbkGameplayTask_EVLabSupply.h"
#include "HbkGameplayTask_EVLabSettingsDataAsset.generated.h"

UCLASS(Blueprintable)
class UHbkGameplayTask_EVLabSettingsDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerInhibitControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLabBattle Battle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreSupply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGameplayTask_EVLabSupply> Supplies;
    
    UHbkGameplayTask_EVLabSettingsDataAsset();

};

