#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EHbkEm5000GameEnvPhase.h"
#include "HbkAnimNotify_em5000_SwitchPhase.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_em5000_SwitchPhase : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm5000GameEnvPhase Phase;
    
    UHbkAnimNotify_em5000_SwitchPhase();

};

