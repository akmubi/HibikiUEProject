#pragma once
#include "CoreMinimal.h"
#include "HbkBossSelectTagInfoList.h"
#include "HbkBossSelectTagInfoDifficultyList.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkBossSelectTagInfoDifficultyList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBossSelectTagInfoList> SelectTagInfoList;
    
    FHbkBossSelectTagInfoDifficultyList();
};

