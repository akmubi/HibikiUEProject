#pragma once
#include "CoreMinimal.h"
#include "HbkAttackHitShapeInfo.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_RhythmLaserAttackInfo.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_RhythmLaser.generated.h"

class UDamageType;

UCLASS(Blueprintable)
class AHbkGimmick_RhythmLaser : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> AttackDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAttackHitShapeInfo AttacktHitShapeInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_RhythmLaserAttackInfo> AttackInfoArray;
    
public:
    AHbkGimmick_RhythmLaser(const FObjectInitializer& ObjectInitializer);

};

