#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_PlayerFootStep.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_PlayerFootStep : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeftStep;
    
    UHbkAnimNotify_PlayerFootStep();

};

