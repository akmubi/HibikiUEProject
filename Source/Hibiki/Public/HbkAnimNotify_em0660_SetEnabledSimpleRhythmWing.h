#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_em0660_SetEnabledSimpleRhythmWing.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_em0660_SetEnabledSimpleRhythmWing : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UHbkAnimNotify_em0660_SetEnabledSimpleRhythmWing();

};

