#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EHbkEm5000ToughType.h"
#include "HbkAnimNotifyState_em5000_SwitchToughNotifyDamage.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HIBIKI_API UHbkAnimNotifyState_em5000_SwitchToughNotifyDamage : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm5000ToughType Type;
    
public:
    UHbkAnimNotifyState_em5000_SwitchToughNotifyDamage();

};

