#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_SPA350State.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_SPA350State : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndState;
    
public:
    UHbkAnimNotify_SPA350State();

};

