#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Templates/SubclassOf.h"
#include "HbkAnimNotify_em0740_SpawnRemainingFire.generated.h"

class AHbkEnemyFireBase;

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_em0740_SpawnRemainingFire : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEnemyFireBase> FireClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnLocationBoneName;
    
public:
    UHbkAnimNotify_em0740_SpawnRemainingFire();

};

