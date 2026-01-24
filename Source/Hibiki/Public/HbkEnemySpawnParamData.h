#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkEnemySpawnSeedList.h"
#include "HbkEnemySpawnParamData.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkEnemySpawnParamData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkEnemySpawnSeedList> SpawnSeedMap;
    
    UHbkEnemySpawnParamData();

};

