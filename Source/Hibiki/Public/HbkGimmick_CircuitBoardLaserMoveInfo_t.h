#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_LightEmissiveColorType_t.h"
#include "HbkGimmick_CircuitBoardLaserMoveInfo_t.generated.h"

class AHbkGimmick_ReverbLaser;

USTRUCT(BlueprintType)
struct FHbkGimmick_CircuitBoardLaserMoveInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MoveSplineComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MoveEventMIDIIndexArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHbkGimmick_LightEmissiveColorType_t> ColorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkGimmick_ReverbLaser* pLaser;
    
    HIBIKI_API FHbkGimmick_CircuitBoardLaserMoveInfo_t();
};

