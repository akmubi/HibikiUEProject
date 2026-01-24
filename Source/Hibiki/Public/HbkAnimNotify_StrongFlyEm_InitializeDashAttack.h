#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_StrongFlyEm_InitializeDashAttack.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_StrongFlyEm_InitializeDashAttack : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExecAttackCount;
    
public:
    UHbkAnimNotify_StrongFlyEm_InitializeDashAttack();

};

