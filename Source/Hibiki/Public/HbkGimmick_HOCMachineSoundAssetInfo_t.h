#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_HOCMachineSoundAssetInfo_t.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkGimmick_HOCMachineSoundAssetInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> InteractSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pInteractSE;
    
    HIBIKI_API FHbkGimmick_HOCMachineSoundAssetInfo_t();
};

