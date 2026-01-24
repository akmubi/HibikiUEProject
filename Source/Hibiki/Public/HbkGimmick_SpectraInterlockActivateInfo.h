#pragma once
#include "CoreMinimal.h"
#include "FHbkGimmick_SpectraInterlockActivateType.h"
#include "HbkGimmick_SpectraInterlockActivateInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_SpectraInterlockActivateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SpectraInterlockActivateType ActivateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtIntValue;
    
    HIBIKI_API FHbkGimmick_SpectraInterlockActivateInfo();
};

