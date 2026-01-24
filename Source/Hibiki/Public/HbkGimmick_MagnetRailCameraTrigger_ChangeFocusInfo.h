#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmick_MagnetRailCameraTrigger_ChangeFocusInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_MagnetRailCameraTrigger_ChangeFocusInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FocusDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FocusOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    HIBIKI_API FHbkGimmick_MagnetRailCameraTrigger_ChangeFocusInfo();
};

