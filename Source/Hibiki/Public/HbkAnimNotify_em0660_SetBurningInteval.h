#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_em0660_SetBurningInteval.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_em0660_SetBurningInteval : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRandomInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NewIntervalCount;
    
    UHbkAnimNotify_em0660_SetBurningInteval();

};

