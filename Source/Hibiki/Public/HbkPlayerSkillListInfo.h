#pragma once
#include "CoreMinimal.h"
#include "HbkPlayerSkillListInfo.generated.h"

class UHbkInventoryObject_Skill;

USTRUCT(BlueprintType)
struct FHbkPlayerSkillListInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkInventoryObject_Skill> InventoryObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsEnoughReverbGauge;
    
    HIBIKI_API FHbkPlayerSkillListInfo();
};

