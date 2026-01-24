#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EQa1milActionVoiceType.h"
#include "HbkAnimNotify_Em1000PlayActionVoice.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_Em1000PlayActionVoice : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQa1milActionVoiceType ActionVoiceType;
    
    UHbkAnimNotify_Em1000PlayActionVoice();

};

