#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_CircuitBoardMaterialSlotInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_CircuitBoardMaterialSlotInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MaterialSlotNameArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float moveSpeed;
    
    HIBIKI_API FHbkGimmick_CircuitBoardMaterialSlotInfo_t();
};

