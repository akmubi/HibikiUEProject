#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "HbkAnimNotify_em0810_PerformAttack.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_em0810_PerformAttack : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttackTag;
    
public:
    UHbkAnimNotify_em0810_PerformAttack();

};

