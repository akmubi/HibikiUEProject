#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DynamicLoadAssetsOnEnemySpawner.h"
#include "HbkGameplayTaskActor.h"
#include "HbkEnemySpawner.generated.h"

class AHbkEnemyCharacter;
class UDataTable;
class UHbkEnemySpawnParamData;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEnemySpawner : public AHbkGameplayTaskActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkEnemySpawnParamData* EnemySpawnSeedParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ResultRankTable_Easy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ResultRankTable_Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ResultRankTable_Hard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ResultRankTable_VeryHard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ResultRankTable_Master;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectGroupName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> LoadAssetsPathArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDynamicLoadAssetsOnEnemySpawner> DynamicLoadAssetList;
    
public:
    AHbkEnemySpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SpawnEnemyFromGroup(const FName& GroupName, bool bForceSpawn);
    
    UFUNCTION(BlueprintCallable)
    bool SpawnEnemy(int32 EnemyId, bool bForceSpawn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SpawnEnemyFromGroup(const FName& GroupName, bool bForceSpawn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SpawnEnemy(int32 EnemyId, bool bForceSpawn);
    
    UFUNCTION(BlueprintCallable)
    void GetSpawnedEnemy(int32 EnemyId, AHbkEnemyCharacter*& Enemy);
    
    UFUNCTION(BlueprintCallable)
    void GetSpawnedEnemies(const FName& GroupName, TArray<AHbkEnemyCharacter*>& Enemies);
    
};

