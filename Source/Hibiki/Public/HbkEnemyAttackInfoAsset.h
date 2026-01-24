#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "HbkEnemyAttackBasicInfo.h"
#include "HbkEnemyAttackInfoAsset.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkEnemyAttackInfoAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FHbkEnemyAttackBasicInfo> AttackInfoMap;
    
    UHbkEnemyAttackInfoAsset();

};

