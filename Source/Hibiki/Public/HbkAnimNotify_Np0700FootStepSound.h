#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EHbkFootStepActionType.h"
#include "HbkAnimNotify_Np0700FootStepSound.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_Np0700FootStepSound : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkFootStepActionType FootStepActionType;
    
public:
    UHbkAnimNotify_Np0700FootStepSound();

};

