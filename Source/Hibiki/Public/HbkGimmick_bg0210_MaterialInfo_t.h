#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_bg0210_MaterialParamInfo_t.h"
#include "HbkGimmick_bg0210_MaterialInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_bg0210_MaterialInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName materialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg0210_MaterialParamInfo_t onParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg0210_MaterialParamInfo_t offParam;
    
    HIBIKI_API FHbkGimmick_bg0210_MaterialInfo_t();
};

