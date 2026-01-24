#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h"
#include "HbkAnimNotify_PlayerCustomEffect.generated.h"

class UMaterialInstance;

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_PlayerCustomEffect : public UAnimNotify_PlayParticleEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* TestMaterial;
    
    UHbkAnimNotify_PlayerCustomEffect();

};

