#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "HbkEnemyAttackBasicInfoTest.h"
#include "HbkEnemyAttackInfoAssetTest.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkEnemyAttackInfoAssetTest : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FHbkEnemyAttackBasicInfoTest> AttackInfoMap;
    
    UHbkEnemyAttackInfoAssetTest();

};

