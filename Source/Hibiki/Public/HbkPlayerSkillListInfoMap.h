#pragma once
#include "CoreMinimal.h"
#include "EHbkInventoryPlayerItemCategory.h"
#include "HbkPlayerSkillListInfoList.h"
#include "HbkPlayerSkillListInfoMap.generated.h"

USTRUCT(BlueprintType)
struct FHbkPlayerSkillListInfoMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EHbkInventoryPlayerItemCategory, FHbkPlayerSkillListInfoList> InfoListMap;
    
    HIBIKI_API FHbkPlayerSkillListInfoMap();
};

