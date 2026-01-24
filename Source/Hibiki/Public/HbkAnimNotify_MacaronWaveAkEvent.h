#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_PlaySound_TngAkEvent.h"
#include "EHbkPlayerChipType.h"
#include "HbkAnimNotify_MacaronWaveAkEvent.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_MacaronWaveAkEvent : public UAnimNotify_PlaySound_TngAkEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPlayerChipType ChipType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EventLv0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EventLv1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EventLv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EventLv3;
    
public:
    UHbkAnimNotify_MacaronWaveAkEvent();

};

