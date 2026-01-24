#pragma once
#include "CoreMinimal.h"
#include "HbkBossSelectTagInfo.h"
#include "HbkBossSelectTagInfoList.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkBossSelectTagInfoList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBossSelectTagInfo> SelectTagInfoList;
    
    FHbkBossSelectTagInfoList();
};

