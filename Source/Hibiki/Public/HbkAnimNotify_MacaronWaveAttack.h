#pragma once
#include "CoreMinimal.h"
#include "HbkAnimNotify_Attack.h"
#include "HbkAttackHitShapeInfo.h"
#include "HbkAnimNotify_MacaronWaveAttack.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_MacaronWaveAttack : public UHbkAnimNotify_Attack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAttackHitShapeInfo HitShapeLv0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAttackHitShapeInfo HitShapeLv1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAttackHitShapeInfo HitShapeLv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAttackHitShapeInfo HitShapeLv3;
    
public:
    UHbkAnimNotify_MacaronWaveAttack();

};

