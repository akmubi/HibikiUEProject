#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkPlayerSkillListInfoMap.h"
#include "HbkSkillListController.generated.h"

UCLASS(Blueprintable)
class UHbkSkillListController : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkPlayerSkillListInfoMap SkillListInfoMap;
    
public:
    UHbkSkillListController();

};

