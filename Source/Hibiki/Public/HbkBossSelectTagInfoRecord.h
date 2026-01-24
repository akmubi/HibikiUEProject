#pragma once
#include "CoreMinimal.h"
#include "HbkBossSelectTagInfoRecord.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkBossSelectTagInfoRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ListIndex;
    
    FHbkBossSelectTagInfoRecord();
};

