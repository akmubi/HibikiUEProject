#pragma once
#include "CoreMinimal.h"
#include "EHbkHologramCharaPostActivateGroup.h"
#include "HbkEnemySpawnSeed.h"
#include "HbkEnemySpawnSeedList.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEnemySpawnSeedList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreSyncEnemySpawnDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkHologramCharaPostActivateGroup HologramCharaPostActivateGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HologramCharaPostActivateGroupRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSingleSpawnByRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEnemySpawnSeed> SpawnSeedList;
    
    FHbkEnemySpawnSeedList();
};

