#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_MobActorHidden.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_MobActorHidden : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideFlag;
    
public:
    UHbkAnimNotify_MobActorHidden();

};

