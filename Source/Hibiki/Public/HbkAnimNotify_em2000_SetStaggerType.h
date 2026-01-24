#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EHbkEm2000StaggerType.h"
#include "HbkAnimNotify_em2000_SetStaggerType.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_em2000_SetStaggerType : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm2000StaggerType StaggerType;
    
public:
    UHbkAnimNotify_em2000_SetStaggerType();

};

