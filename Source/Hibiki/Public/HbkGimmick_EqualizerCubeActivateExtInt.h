#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_EqualizerCubeAction.h"
#include "HbkGimmick_EqualizerCubeActivateExtInt.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_EqualizerCubeActivateExtInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActivateExtIntValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_EqualizerCubeAction Action;
    
    HIBIKI_API FHbkGimmick_EqualizerCubeActivateExtInt();
};

