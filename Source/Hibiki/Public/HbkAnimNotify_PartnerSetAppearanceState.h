#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EHbkPartnerAppearanceState.h"
#include "HbkAnimNotify_PartnerSetAppearanceState.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_PartnerSetAppearanceState : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPartnerAppearanceState NewState;
    
    UHbkAnimNotify_PartnerSetAppearanceState();

};

