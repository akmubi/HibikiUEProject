#pragma once
#include "CoreMinimal.h"
#include "EHbkBossSelectTagContinueInhibition.h"
#include "HbkBossSelectTagPhaseInfoData.h"
#include "HbkBossSelectTagInfoData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBossSelectTagInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkBossSelectTagContinueInhibition ContinueInhibitionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBossSelectTagPhaseInfoData> PhaseData;
    
    HIBIKI_API FHbkBossSelectTagInfoData();
};

