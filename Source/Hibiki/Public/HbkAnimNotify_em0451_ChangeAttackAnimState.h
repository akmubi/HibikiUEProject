#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ECentaur_SpearAttackType.h"
#include "HbkAnimNotify_em0451_ChangeAttackAnimState.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_em0451_ChangeAttackAnimState : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECentaur_SpearAttackType SpearAttackType;
    
    UHbkAnimNotify_em0451_ChangeAttackAnimState();

};

