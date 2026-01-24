#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_em0570_LoopCheckAndNextSection.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_em0570_LoopCheckAndNextSection : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextSection;
    
public:
    UHbkAnimNotify_em0570_LoopCheckAndNextSection();

};

