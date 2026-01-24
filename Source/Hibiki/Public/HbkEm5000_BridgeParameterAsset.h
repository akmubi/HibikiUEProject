#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EHbkDifficultyType.h"
#include "HbkEm5000BridgeParameter.h"
#include "HbkEm5000_BridgeParameterAsset.generated.h"

UCLASS(Blueprintable)
class UHbkEm5000_BridgeParameterAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkDifficultyType, FHbkEm5000BridgeParameter> BridgeParams;
    
    UHbkEm5000_BridgeParameterAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

