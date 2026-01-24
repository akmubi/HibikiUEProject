#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_PeripheralsInterlockParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_PeripheralsInterlockParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InterlockCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StayCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartAtSameTime;
    
    HIBIKI_API FHbkGimmick_PeripheralsInterlockParam();
};

