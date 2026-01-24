#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "HbkAnimNotify_EnemyAttackRhythmAdjustTiming.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_EnemyAttackRhythmAdjustTiming : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AdjustNote;
    
public:
    UHbkAnimNotify_EnemyAttackRhythmAdjustTiming();

};

