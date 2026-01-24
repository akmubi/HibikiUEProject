#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_FireGate_ParamInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_FireGate_ParamInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExecBeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FlickBeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResumeDamageCount;
    
    HIBIKI_API FHbkGimmick_FireGate_ParamInfo_t();
};

