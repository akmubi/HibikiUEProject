#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "HbkAnimNotify_AttackBeatHit.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_AttackBeatHit : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BeatHitTag;
    
public:
    UHbkAnimNotify_AttackBeatHit();

};

