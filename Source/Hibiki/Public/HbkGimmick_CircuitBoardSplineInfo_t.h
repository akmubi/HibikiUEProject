#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_CircuitBoardMaterialSlotInfo_t.h"
#include "HbkGimmick_CircuitBoardSplineInfo_t.generated.h"

class UTngSplineComponent;

USTRUCT(BlueprintType)
struct FHbkGimmick_CircuitBoardSplineInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MoveSplineComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_CircuitBoardMaterialSlotInfo_t> MaterialSlotInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTngSplineComponent* pMoveSpline;
    
    HIBIKI_API FHbkGimmick_CircuitBoardSplineInfo_t();
};

