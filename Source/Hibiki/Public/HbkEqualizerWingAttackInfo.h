#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkEqualizerWingAttackInfo.generated.h"

class UHbkImproveAttackComponent;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEqualizerWingAttackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHbkImproveAttackComponent> AttackComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BeginLocation;
    
    FHbkEqualizerWingAttackInfo();
};

