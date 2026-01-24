#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkScoreActionType.h"
#include "HbkScoreBonusRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkScoreBonusRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkScoreActionType ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreScaleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValidNoteCount;
    
    HIBIKI_API FHbkScoreBonusRow();
};

