#pragma once
#include "CoreMinimal.h"
#include "HbkEquipSlotVisibleInfo.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEquipSlotVisibleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EquipSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisible;
    
    FHbkEquipSlotVisibleInfo();
};

