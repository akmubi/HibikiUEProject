#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_ActivateInfo_t.h"
#include "HbkAnimNotify_OwnersActivate.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_OwnersActivate : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkAnimNotify_ActivateInfo_t> ActivateInfos;
    
public:
    UHbkAnimNotify_OwnersActivate();

};

