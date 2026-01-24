#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_GimmickImpact.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_GimmickImpact : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnableTime;
    
    UHbkAnimNotify_GimmickImpact();

};

