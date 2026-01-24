#pragma once
#include "CoreMinimal.h"
#include "EHbkDifficultyType.h"
#include "HbkStageInfoRow.h"
#include "HbkStageSelect_StageResultInfo.h"
#include "HbkStageSelect_StageDetailInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkStageSelect_StageDetailInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkStageInfoRow StageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpectraCleared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpectraRoomRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkDifficultyType, FHbkStageSelect_StageResultInfo> StageDifficultyMap;
    
    HIBIKI_API FHbkStageSelect_StageDetailInfo();
};

