#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ECentaur_SpearAttackType.h"
#include "HbkAnimNotifyState_em0451_ChangeAttackState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HIBIKI_API UHbkAnimNotifyState_em0451_ChangeAttackState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUndoOnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECentaur_SpearAttackType AttackType;
    
    UHbkAnimNotifyState_em0451_ChangeAttackState();

};

