#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkEm7500PlayArmAnimInfo.h"
#include "HbkAnimNotify_em7500_PlayArmAnim.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_em7500_PlayArmAnim : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkEm7500PlayArmAnimInfo> ArmAnimInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayRatio;
    
    UHbkAnimNotify_em7500_PlayArmAnim();

};

