#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkStageEventAssetInfo_t.h"
#include "HbkGameplayEventAssetData.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayEventAssetData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkStageEventAssetInfo_t> StageAssetDataMap;
    
    UHbkGameplayEventAssetData();

};

