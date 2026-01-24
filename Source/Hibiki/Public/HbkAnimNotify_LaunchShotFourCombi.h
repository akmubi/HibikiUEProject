#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EHbkKaleShotFourCombiGroup.h"
#include "HbkAnimNotify_LaunchShotFourCombi.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_LaunchShotFourCombi : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkKaleShotFourCombiGroup ChoiceGroup;
    
    UHbkAnimNotify_LaunchShotFourCombi();

};

