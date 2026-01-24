#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EHbkEm5000ActionVoiceType.h"
#include "HbkAnimNotify_Em5000PlayActionVoice.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_Em5000PlayActionVoice : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm5000ActionVoiceType ActionVoiceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnlySpecificPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SpecificPhaseList;
    
    UHbkAnimNotify_Em5000PlayActionVoice();

};

