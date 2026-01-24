#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EKaleHintTalkType.h"
#include "HbkAnimNotify_Em7500PlayHintTalk.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_Em7500PlayHintTalk : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKaleHintTalkType HintTalkType;
    
    UHbkAnimNotify_Em7500PlayHintTalk();

};

