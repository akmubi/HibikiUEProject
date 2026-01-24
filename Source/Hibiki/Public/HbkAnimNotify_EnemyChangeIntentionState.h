#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EEnemyIntentionState.h"
#include "HbkAnimNotify_EnemyChangeIntentionState.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_EnemyChangeIntentionState : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyIntentionState NewIntentionState;
    
public:
    UHbkAnimNotify_EnemyChangeIntentionState();

};

