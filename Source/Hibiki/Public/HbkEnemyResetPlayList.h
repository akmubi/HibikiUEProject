#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkEnemyResetPlayMode.h"
#include "HbkEnemyResetPlayList.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEnemyResetPlayList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEnemyResetPlayMode PlaybackMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> EnemyResetList;
    
    FHbkEnemyResetPlayList();
};

