#pragma once
#include "CoreMinimal.h"
#include "HbkMaterialSlotInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkMaterialSlotInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString materialAssetPath;
    
    HIBIKI_API FHbkMaterialSlotInfo_t();
};

