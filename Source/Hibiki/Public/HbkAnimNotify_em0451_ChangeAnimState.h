#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ECentaur_SpearState.h"
#include "HbkAnimNotify_em0451_ChangeAnimState.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_em0451_ChangeAnimState : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECentaur_SpearState SpearState;
    
    UHbkAnimNotify_em0451_ChangeAnimState();

};

