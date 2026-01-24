#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_ReverbLaserAudioAssetInfo_t.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkGimmick_ReverbLaserAudioAssetInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> VerticalLaser01SE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pVerticalLaser01SE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> VerticalLaser02SE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pVerticalLaser02SE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> SideLaserSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pSideLaserSE;
    
    HIBIKI_API FHbkGimmick_ReverbLaserAudioAssetInfo_t();
};

