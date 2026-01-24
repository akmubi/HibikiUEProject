#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_GimmickBg1120_HideDecalLight.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_GimmickBg1120_HideDecalLight : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideFlag;
    
public:
    UHbkAnimNotify_GimmickBg1120_HideDecalLight();

};

