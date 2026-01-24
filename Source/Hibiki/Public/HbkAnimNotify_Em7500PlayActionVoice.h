#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EKaleActionVoiceType.h"
#include "HbkAnimNotify_Em7500PlayActionVoice.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_Em7500PlayActionVoice : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKaleActionVoiceType ActionVoiceType;
    
    UHbkAnimNotify_Em7500PlayActionVoice();

};

