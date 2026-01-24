#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EHbkEm2000ActionVoiceType.h"
#include "HbkAnimNotify_Em2000PlayActionVoice.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_Em2000PlayActionVoice : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm2000ActionVoiceType ActionVoiceType;
    
    UHbkAnimNotify_Em2000PlayActionVoice();

};

