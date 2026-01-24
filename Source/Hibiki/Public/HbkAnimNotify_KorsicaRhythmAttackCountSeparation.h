#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_KorsicaRhythmAttackCountSeparation.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_KorsicaRhythmAttackCountSeparation : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ImpactCountSeparation;
    
    UHbkAnimNotify_KorsicaRhythmAttackCountSeparation();

};

