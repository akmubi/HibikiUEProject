#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "HbkAnimNotify_em0210_SpawnFireWave.generated.h"

class AHbkEnemyFireGroupBase;

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_em0210_SpawnFireWave : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEnemyFireGroupBase> FireGroupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnLocationBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CheckStatusEffectiveTag;
    
public:
    UHbkAnimNotify_em0210_SpawnFireWave();

};

