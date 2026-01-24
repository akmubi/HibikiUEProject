#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkDecalPastingParam.h"
#include "HbkHbkDecalPastingAsset.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkHbkDecalPastingAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkDecalPastingParam> DecalPastingParams;
    
    UHbkHbkDecalPastingAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

