#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EHbkTalkScreenTransition.h"
#include "HbkAnimNotify_em0730_StartScreenTransition.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_em0730_StartScreenTransition : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTalkScreenTransition TransitionType;
    
public:
    UHbkAnimNotify_em0730_StartScreenTransition();

};

