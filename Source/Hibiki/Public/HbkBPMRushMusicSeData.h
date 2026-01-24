#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushMusicSeData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkBPMRushMusicSeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudienceDismaySE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudienceExcitementSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudienceCheersSeThresholdGaugeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudienceCheersSeInvalidTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StrongEnemyAppearsSE;
    
    HIBIKI_API FHbkBPMRushMusicSeData();
};

