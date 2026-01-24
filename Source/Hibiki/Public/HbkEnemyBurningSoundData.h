#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyBurningSoundData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkEnemyBurningSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SE_Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SE_Disabled;
    
    HIBIKI_API FHbkEnemyBurningSoundData();
};

