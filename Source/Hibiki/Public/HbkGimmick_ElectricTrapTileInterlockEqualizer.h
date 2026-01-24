#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_ElectricTrapTileInterlockEqualizerParam.h"
#include "HbkGimmick_ElectricTrapTileInterlockEqualizer.generated.h"

class AHbkGimmickBase;

USTRUCT(BlueprintType)
struct FHbkGimmick_ElectricTrapTileInterlockEqualizer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmickBase* Equalizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_ElectricTrapTileInterlockEqualizerParam> InterlockParams;
    
    HIBIKI_API FHbkGimmick_ElectricTrapTileInterlockEqualizer();
};

