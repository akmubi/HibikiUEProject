#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_Em7500AttackRhythmAdjustLocation.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_Em7500AttackRhythmAdjustLocation : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsKeepCurrentLocAndRot;
    
public:
    UHbkAnimNotify_Em7500AttackRhythmAdjustLocation();

};

