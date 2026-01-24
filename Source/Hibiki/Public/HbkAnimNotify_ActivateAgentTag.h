#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_ActivateAgentTagInfo_t.h"
#include "HbkAnimNotify_ActivateAgentTag.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_ActivateAgentTag : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkAnimNotify_ActivateAgentTagInfo_t> ExecInfoArray;
    
public:
    UHbkAnimNotify_ActivateAgentTag();

};

