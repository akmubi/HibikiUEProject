#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkAttackHitShapeInfo.h"
#include "Templates/SubclassOf.h"
#include "HbkDeadBombDamageParam.generated.h"

class UTngDamageType;

UCLASS(Blueprintable)
class UHbkDeadBombDamageParam : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTngDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAttackHitShapeInfo HitShapeInfo;
    
    UHbkDeadBombDamageParam();

};

