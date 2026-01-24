#pragma once
#include "CoreMinimal.h"
#include "HbkAttackHitShapeInfo.h"
#include "Templates/SubclassOf.h"
#include "HbkEm7500ArmWaveAttackParam.generated.h"

class UHbkImproveAttackComponent;
class UTngDamageType;

USTRUCT(BlueprintType)
struct FHbkEm7500ArmWaveAttackParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAttackHitShapeInfo HitShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTngDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkImproveAttackComponent> AttackComp;
    
    HIBIKI_API FHbkEm7500ArmWaveAttackParam();
};

