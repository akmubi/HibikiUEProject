#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_em0810_SetRandomAttackNum.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_em0810_SetRandomAttackNum : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandNumMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandNumMax;
    
public:
    UHbkAnimNotify_em0810_SetRandomAttackNum();

};

