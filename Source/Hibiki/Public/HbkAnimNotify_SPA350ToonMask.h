#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_SPA350ToonMask.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_SPA350ToonMask : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndMask;
    
public:
    UHbkAnimNotify_SPA350ToonMask();

};

