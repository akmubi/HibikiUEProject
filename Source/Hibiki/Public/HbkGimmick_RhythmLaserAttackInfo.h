#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_RhythmLaserAttackInfo.generated.h"

class UHbkImproveAttackComponent;

USTRUCT(BlueprintType)
struct FHbkGimmick_RhythmLaserAttackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkImproveAttackComponent* AttackComp;
    
    HIBIKI_API FHbkGimmick_RhythmLaserAttackInfo();
};

