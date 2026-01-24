#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_SignboardFrame_CurveInfo_t.generated.h"

class UAkAudioEvent;
class UCurveVector;

USTRUCT(BlueprintType)
struct FHbkGimmick_SignboardFrame_CurveInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveVector> curveAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveVector* pCurveAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool loopFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> AnimationSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pAnimationSE;
    
    HIBIKI_API FHbkGimmick_SignboardFrame_CurveInfo_t();
};

