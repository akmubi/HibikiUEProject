#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickCurveType_t.h"
#include "EHbkNote.h"
#include "EHbkSplineMoveType_t.h"
#include "HbkGimmick_SplineMoveControl_MoveInfo_t.h"
#include "HbkGimmick_SplineMoveControl_Info_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_SplineMoveControl_Info_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHbkSplineMoveType_t> moveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickCurveType_t curveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SplineMoveControl_MoveInfo_t MoveInfo;
    
    HIBIKI_API FHbkGimmick_SplineMoveControl_Info_t();
};

