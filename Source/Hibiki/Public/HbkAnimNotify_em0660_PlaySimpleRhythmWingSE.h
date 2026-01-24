#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_em0660_PlaySimpleRhythmWingSE.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_em0660_PlaySimpleRhythmWingSE : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlaySEData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAtLocation;
    
    UHbkAnimNotify_em0660_PlaySimpleRhythmWingSE();

};

