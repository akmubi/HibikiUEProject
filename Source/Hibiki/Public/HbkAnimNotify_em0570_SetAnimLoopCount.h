#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_em0570_SetAnimLoopCount.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_em0570_SetAnimLoopCount : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopCount;
    
public:
    UHbkAnimNotify_em0570_SetAnimLoopCount();

};

