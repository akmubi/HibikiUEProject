#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkGimmick_ElectricTrapFloorTagInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_ElectricTrapFloorTagInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer activateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName activateCallSign;
    
    HIBIKI_API FHbkGimmick_ElectricTrapFloorTagInfo();
};

