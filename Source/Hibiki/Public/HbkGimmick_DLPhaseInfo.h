#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_DLLightningNoteInfo.h"
#include "HbkGimmick_DLPhaseCloudParam.h"
#include "HbkGimmick_DLPhaseLightningParam.h"
#include "HbkGimmick_DLPhaseInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_DLPhaseInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_DLLightningNoteInfo LoopNoteInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_DLLightningNoteInfo> ExecNoteArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_DLPhaseLightningParam LightningParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_DLPhaseCloudParam> CloudgParam;
    
    HIBIKI_API FHbkGimmick_DLPhaseInfo();
};

