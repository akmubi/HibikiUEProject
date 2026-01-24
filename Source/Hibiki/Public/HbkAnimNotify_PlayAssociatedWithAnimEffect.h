#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h"
#include "HbkAnimNotify_PlayAssociatedWithAnimEffect.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_PlayAssociatedWithAnimEffect : public UAnimNotify_PlayParticleEffect {
    GENERATED_BODY()
public:
    UHbkAnimNotify_PlayAssociatedWithAnimEffect();

};

