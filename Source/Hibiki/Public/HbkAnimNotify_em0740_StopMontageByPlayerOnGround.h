#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_em0740_StopMontageByPlayerOnGround.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_em0740_StopMontageByPlayerOnGround : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckIsPlayerOnGround;
    
public:
    UHbkAnimNotify_em0740_StopMontageByPlayerOnGround();

};

