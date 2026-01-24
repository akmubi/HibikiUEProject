#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EHbkEm6000_ActionVoiceType.h"
#include "HbkAnimNotify_Em6000PlayActionVoice.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_Em6000PlayActionVoice : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm6000_ActionVoiceType ActionVoiceType;
    
    UHbkAnimNotify_Em6000PlayActionVoice();

};

