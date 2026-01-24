#pragma once
#include "CoreMinimal.h"
#include "HbkRhythmJumpEffectInfo.generated.h"

class UAkAudioEvent;
class UParticleSystem;

USTRUCT(BlueprintType)
struct FHbkRhythmJumpEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystem*> RhythmJumpEffectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> RhythmJumpSoundList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SuccessLandingSound;
    
    HIBIKI_API FHbkRhythmJumpEffectInfo();
};

