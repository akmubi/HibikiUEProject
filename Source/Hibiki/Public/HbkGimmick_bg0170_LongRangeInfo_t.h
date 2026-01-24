#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_bg0170_LongRangeInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_bg0170_LongRangeInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Open;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OpenAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DefaultPartnerTargetPointEnabled;
    
    HIBIKI_API FHbkGimmick_bg0170_LongRangeInfo_t();
};

