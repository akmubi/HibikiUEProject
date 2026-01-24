#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_BreakObjectSound.generated.h"

class UAkAudioEvent;
class UAkComponent;

USTRUCT(BlueprintType)
struct FHbkGimmick_BreakObjectSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> BreakSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BreakSeRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComp;
    
    HIBIKI_API FHbkGimmick_BreakObjectSound();
};

