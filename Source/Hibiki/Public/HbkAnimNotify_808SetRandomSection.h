#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_808SetRandomSection.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_808SetRandomSection : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentSectionName;
    
    UHbkAnimNotify_808SetRandomSection();

};

