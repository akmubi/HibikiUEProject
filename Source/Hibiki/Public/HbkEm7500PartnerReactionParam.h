#pragma once
#include "CoreMinimal.h"
#include "EHbkPartnerAttackType.h"
#include "EHbkPartnerType.h"
#include "HbkEm7500PartnerReactionParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm7500PartnerReactionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPartnerType PartnerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPartnerAttackType AttackType;
    
    HIBIKI_API FHbkEm7500PartnerReactionParam();
};

