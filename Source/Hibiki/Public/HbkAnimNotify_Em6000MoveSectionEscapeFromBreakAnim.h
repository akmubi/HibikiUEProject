#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_Em6000MoveSectionEscapeFromBreakAnim.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_Em6000MoveSectionEscapeFromBreakAnim : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckLength;
    
    UHbkAnimNotify_Em6000MoveSectionEscapeFromBreakAnim();

};

