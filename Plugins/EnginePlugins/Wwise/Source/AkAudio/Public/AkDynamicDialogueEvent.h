#pragma once
#include "CoreMinimal.h"
#include "AkAudioType.h"
#include "AkDynamicDialogueEvent.generated.h"

class UAkAudioBank;

UCLASS(Blueprintable)
class AKAUDIO_API UAkDynamicDialogueEvent : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioBank* RequiredBank;
    
    UAkDynamicDialogueEvent();

};

