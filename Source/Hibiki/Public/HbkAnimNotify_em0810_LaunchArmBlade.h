#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_em0810_LaunchArmBlade.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_em0810_LaunchArmBlade : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BladeIndex;
    
public:
    UHbkAnimNotify_em0810_LaunchArmBlade();

};

