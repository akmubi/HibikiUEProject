#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkTitleMenuNpcRandomMotionType.h"
#include "HbkTitleMenuNpcRandomMotionParamRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkTitleMenuNpcRandomMotionParamRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTitleMenuNpcRandomMotionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoInputTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTimeMax;
    
    HIBIKI_API FHbkTitleMenuNpcRandomMotionParamRow();
};

