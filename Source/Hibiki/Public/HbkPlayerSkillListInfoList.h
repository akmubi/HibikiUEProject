#pragma once
#include "CoreMinimal.h"
#include "HbkPlayerSkillListInfo.h"
#include "HbkPlayerSkillListInfoList.generated.h"

USTRUCT(BlueprintType)
struct FHbkPlayerSkillListInfoList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkPlayerSkillListInfo> InfoList;
    
    HIBIKI_API FHbkPlayerSkillListInfoList();
};

