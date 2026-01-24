#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_StrongFlyEm_ParryRepelledLoopStart.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_StrongFlyEm_ParryRepelledLoopStart : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoopTimeCount;
    
public:
    UHbkAnimNotify_StrongFlyEm_ParryRepelledLoopStart();

};

