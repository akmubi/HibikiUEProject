#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Templates/SubclassOf.h"
#include "HbkAnimNotify_em7500_SpawnFireGroup.generated.h"

class AHbkEnemyFireGroupBase;

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_em7500_SpawnFireGroup : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEnemyFireGroupBase> FireGroupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnLocationBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnOffsetLocation;
    
public:
    UHbkAnimNotify_em7500_SpawnFireGroup();

};

