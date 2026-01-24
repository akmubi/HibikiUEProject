#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EAttackNoticeType.h"
#include "HbkAnimNotify_KorsicaRhythmAttackCreateNotice.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_KorsicaRhythmAttackCreateNotice : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackNoticeType NoticeType;
    
    UHbkAnimNotify_KorsicaRhythmAttackCreateNotice();

};

