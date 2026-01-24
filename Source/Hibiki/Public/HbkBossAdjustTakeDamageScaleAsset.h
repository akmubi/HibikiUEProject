#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkBossAdjustTakeDamageScaleInfo.h"
#include "HbkBossAdjustTakeDamageScaleAsset.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkBossAdjustTakeDamageScaleAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBossAdjustTakeDamageScaleInfo> DamageScaleInfos;
    
    UHbkBossAdjustTakeDamageScaleAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

