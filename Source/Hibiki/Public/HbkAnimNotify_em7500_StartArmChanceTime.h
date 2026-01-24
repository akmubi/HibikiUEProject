#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EHbkPartnerType.h"
#include "HbkAnimNotify_em7500_StartArmChanceTime.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_em7500_StartArmChanceTime : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPartnerType PartnerType;
    
    UHbkAnimNotify_em7500_StartArmChanceTime();

};

