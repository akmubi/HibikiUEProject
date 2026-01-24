#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickCurveType_t.h"
#include "EHbkGimmickMoveAnimType_t.h"
#include "EHbkGimmickMoveBeatType_t.h"
#include "EHbkGimmickMoveType_t.h"
#include "HbkGimmickMoveAnimCommonCustomInfo_t.h"
#include "HbkGimmickMoveAnimCommonInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickMoveAnimCommonInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHbkGimmickMoveType_t> AnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHbkGimmickMoveBeatType_t> beatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHbkGimmickMoveAnimType_t> moveAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickMoveAnimCommonCustomInfo_t customInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 delayBeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool changeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickCurveType_t curveType;
    
    HIBIKI_API FHbkGimmickMoveAnimCommonInfo_t();
};

