#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_ElectricTrapTileInterlockElectricCore.h"
#include "HbkGimmick_ElectricTrapTileInterlockEqualizer.h"
#include "HbkGimmick_ElectricTrapTileInterlock.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_ElectricTrapTileInterlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_ElectricTrapTileInterlockElectricCore> InterlockElectricCore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_ElectricTrapTileInterlockEqualizer> InterlockEqualizer;
    
    HIBIKI_API FHbkGimmick_ElectricTrapTileInterlock();
};

