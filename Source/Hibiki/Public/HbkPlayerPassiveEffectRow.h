#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkPlayerPassiveEffectType.h"
#include "HbkPlayerPassiveEffectRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkPlayerPassiveEffectRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPlayerPassiveEffectType PassiveEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectAmount;
    
    HIBIKI_API FHbkPlayerPassiveEffectRow();
};

