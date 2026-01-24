#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.h"
#include "FHbkGameplayTask_EVLabEnemyTutorialMode.h"
#include "HbkGameplayTask_EVLabEnemy.h"
#include "HbkGameplayTask_EVLabEnemySupply.generated.h"

USTRUCT(BlueprintType)
struct FHbkGameplayTask_EVLabEnemySupply {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLabEnemyTutorialMode TutorialMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote SpawnSyncNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnSyncCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForEventScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGameplayTask_EVLabEnemy> AttackOrder;
    
    HIBIKI_API FHbkGameplayTask_EVLabEnemySupply();
};

