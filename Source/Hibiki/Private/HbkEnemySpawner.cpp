#include "HbkEnemySpawner.h"
#include "Components/SceneComponent.h"

AHbkEnemySpawner::AHbkEnemySpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->EnemySpawnSeedParams = NULL;
    this->ResultRankTable_Easy = NULL;
    this->ResultRankTable_Normal = NULL;
    this->ResultRankTable_Hard = NULL;
    this->ResultRankTable_VeryHard = NULL;
    this->ResultRankTable_Master = NULL;
}

bool AHbkEnemySpawner::SpawnEnemyFromGroup(const FName& GroupName, bool bForceSpawn) {
    return false;
}

bool AHbkEnemySpawner::SpawnEnemy(int32 EnemyId, bool bForceSpawn) {
    return false;
}

void AHbkEnemySpawner::Server_SpawnEnemyFromGroup_Implementation(const FName& GroupName, bool bForceSpawn) {
}
bool AHbkEnemySpawner::Server_SpawnEnemyFromGroup_Validate(const FName& GroupName, bool bForceSpawn) {
    return true;
}

void AHbkEnemySpawner::Server_SpawnEnemy_Implementation(int32 EnemyId, bool bForceSpawn) {
}
bool AHbkEnemySpawner::Server_SpawnEnemy_Validate(int32 EnemyId, bool bForceSpawn) {
    return true;
}

void AHbkEnemySpawner::GetSpawnedEnemy(int32 EnemyId, AHbkEnemyCharacter*& Enemy) {
}

void AHbkEnemySpawner::GetSpawnedEnemies(const FName& GroupName, TArray<AHbkEnemyCharacter*>& Enemies) {
}


