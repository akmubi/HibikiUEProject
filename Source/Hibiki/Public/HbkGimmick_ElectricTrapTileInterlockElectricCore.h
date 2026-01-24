#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_ElectricTrapTileElectricCoreTagInfo.h"
#include "HbkGimmick_ElectricTrapTileInterlockElectricCoreParam.h"
#include "HbkGimmick_ElectricTrapTileInterlockElectricCore.generated.h"

class AHbkGimmickBase;

USTRUCT(BlueprintType)
struct FHbkGimmick_ElectricTrapTileInterlockElectricCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmickBase* ElectricCore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_ElectricTrapTileInterlockElectricCoreParam> InterlockParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ElectricTrapTileElectricCoreTagInfo SignAttackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ElectricTrapTileElectricCoreTagInfo AttackTag;
    
    HIBIKI_API FHbkGimmick_ElectricTrapTileInterlockElectricCore();
};

