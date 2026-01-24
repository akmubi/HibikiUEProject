#pragma once
#include "CoreMinimal.h"
#include "HbkBossQTEInputInfo.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkBossQTEInputInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SuccessJumpLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FailureJumpLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuccessJustFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SuccessMoreJumpLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuccessMoreJumpFrameNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SuccessSE;
    
    FHbkBossQTEInputInfo();
};

