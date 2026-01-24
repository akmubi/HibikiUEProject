#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "HbkAnimNotify_AdjustPlayRateWithTargetNotes.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_AdjustPlayRateWithTargetNotes : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AdjustNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSlotGroup;
    
public:
    UHbkAnimNotify_AdjustPlayRateWithTargetNotes();

};

