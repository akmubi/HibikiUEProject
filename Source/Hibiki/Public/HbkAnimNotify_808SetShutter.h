#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_808SetShutter.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_808SetShutter : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOpenShutter;
    
    UHbkAnimNotify_808SetShutter();

};

