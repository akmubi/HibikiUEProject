#pragma once
#include "CoreMinimal.h"
#include "AttackInterface.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_ElectricTrapFloorScale.h"
#include "HbkGimmick_ElectricTrapFloorSound.h"
#include "HbkGimmick_ElectricTrapFloorTagInfo.h"
#include "HbkGimmick_ElectricTrapFloorVfx.h"
#include "HbkGimmick_ElectricTrapFloor.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_ElectricTrapFloor : public AHbkGimmickBase, public IAttackInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ElectricTrapFloorScale Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ElectricTrapFloorVfx Vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ElectricTrapFloorSound Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ElectricTrapFloorTagInfo SignAttackTagInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ElectricTrapFloorTagInfo AttackTagInfo;
    
public:
    AHbkGimmick_ElectricTrapFloor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

