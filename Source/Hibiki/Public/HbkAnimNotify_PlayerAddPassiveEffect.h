#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EHbkPlayerPassiveEffectType.h"
#include "HbkAnimNotify_PlayerAddPassiveEffect.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_PlayerAddPassiveEffect : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPlayerPassiveEffectType PassiveEffectType;
    
public:
    UHbkAnimNotify_PlayerAddPassiveEffect();

};

