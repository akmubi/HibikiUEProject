#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Templates/SubclassOf.h"
#include "HbkAnimNotify_em0570_SpawnFireWave.generated.h"

class AHbkEnemyFireGroupBase;

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_em0570_SpawnFireWave : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEnemyFireGroupBase> FireGroupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnSocketName;
    
public:
    UHbkAnimNotify_em0570_SpawnFireWave();

};

