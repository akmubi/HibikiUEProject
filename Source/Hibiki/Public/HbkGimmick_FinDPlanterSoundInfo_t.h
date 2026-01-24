#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_FinDPlanterSoundInfo_t.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkGimmick_FinDPlanterSoundInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> HitMoveSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pHitMoveSE;
    
    HIBIKI_API FHbkGimmick_FinDPlanterSoundInfo_t();
};

