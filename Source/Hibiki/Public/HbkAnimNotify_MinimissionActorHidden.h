#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_MinimissionActorHidden.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_MinimissionActorHidden : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideFlag;
    
public:
    UHbkAnimNotify_MinimissionActorHidden();

};

