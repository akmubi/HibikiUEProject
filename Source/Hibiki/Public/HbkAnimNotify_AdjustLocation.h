#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_AdjustLocation.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_AdjustLocation : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationTime;
    
public:
    UHbkAnimNotify_AdjustLocation();

};

