#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_StrongFlyEm_InitializedDisabledCounterAttack.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_StrongFlyEm_InitializedDisabledCounterAttack : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeCount;
    
public:
    UHbkAnimNotify_StrongFlyEm_InitializedDisabledCounterAttack();

};

