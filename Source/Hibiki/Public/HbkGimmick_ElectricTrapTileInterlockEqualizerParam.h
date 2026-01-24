#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_ElectricTrapTileInterlockEqualizerParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_ElectricTrapTileInterlockEqualizerParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActivateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EqualizerExtInt;
    
    HIBIKI_API FHbkGimmick_ElectricTrapTileInterlockEqualizerParam();
};

