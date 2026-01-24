#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_NotifyEndOtherAction.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_NotifyEndOtherAction : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JumpSectionName;
    
    UHbkAnimNotify_NotifyEndOtherAction();

};

