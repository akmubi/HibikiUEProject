#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_TitleNpcPlaySlotAnimation.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_TitleNpcPlaySlotAnimation : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionName;
    
public:
    UHbkAnimNotify_TitleNpcPlaySlotAnimation();

};

