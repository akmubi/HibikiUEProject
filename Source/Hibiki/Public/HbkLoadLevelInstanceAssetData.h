#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkLoadLevelInstanceArray_t.h"
#include "HbkLoadLevelInstanceAssetData.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkLoadLevelInstanceAssetData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkLoadLevelInstanceArray_t> LoadLevelArrayMap;
    
    UHbkLoadLevelInstanceAssetData();

};

