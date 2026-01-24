#pragma once
#include "CoreMinimal.h"
#include "HbkEm6000_BeChasedParam.h"
#include "HbkEm6000_NoteTime.h"
#include "HbkEm6000_PhaseParameter.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6000_PhaseParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000_NoteTime AttackInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000_BeChasedParam BeChasedParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MiniGameSuccessRateForJudging;
    
    HIBIKI_API FHbkEm6000_PhaseParameter();
};

