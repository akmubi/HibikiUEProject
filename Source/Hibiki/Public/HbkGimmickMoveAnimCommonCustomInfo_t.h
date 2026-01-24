#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickMoveAnimCommonCustomInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickMoveAnimCommonCustomInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool moveInOneBeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 moveBeatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 waitBeatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 startBeatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rotateReturnBeatCount;
    
    HIBIKI_API FHbkGimmickMoveAnimCommonCustomInfo_t();
};

