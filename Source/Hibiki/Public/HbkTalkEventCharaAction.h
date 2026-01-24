#pragma once
#include "CoreMinimal.h"
#include "EHbkTalkEventVisibilityParam.h"
#include "HbkTalkEventLookAtParam.h"
#include "HbkTalkEventCharaAction.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkTalkEventCharaAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkEventLookAtParam LookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTalkEventVisibilityParam Visibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FacialAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FacialAnimBlendInTime;
    
    FHbkTalkEventCharaAction();
};

