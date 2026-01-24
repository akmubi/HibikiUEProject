#pragma once
#include "CoreMinimal.h"
#include "HbkCineMaterialSwitchOverride.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FHbkCineMaterialSwitchOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString materialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bEnableSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UMaterialInstance* MaterialInstance;
    
    HIBIKI_API FHbkCineMaterialSwitchOverride();
};

