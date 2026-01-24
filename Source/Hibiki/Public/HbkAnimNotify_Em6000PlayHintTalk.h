#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EHbkEm6000_HintTalkType.h"
#include "HbkAnimNotify_Em6000PlayHintTalk.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_Em6000PlayHintTalk : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm6000_HintTalkType HintTalkType;
    
    UHbkAnimNotify_Em6000PlayHintTalk();

};

