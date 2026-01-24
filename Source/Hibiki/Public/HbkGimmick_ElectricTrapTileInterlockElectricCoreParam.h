#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_ElectricTrapTileInterlockElectricCoreParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_ElectricTrapTileInterlockElectricCoreParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActivateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElectricCoreExtInt;
    
    HIBIKI_API FHbkGimmick_ElectricTrapTileInterlockElectricCoreParam();
};

