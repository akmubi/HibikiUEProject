#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_em0661_PlayWingSE.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_em0661_PlayWingSE : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlaySEData;
    
    UHbkAnimNotify_em0661_PlayWingSE();

};

