#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h"
#include "EHbkPlayerChipType.h"
#include "HbkAnimNotify_MacaronWaveEffect.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_MacaronWaveEffect : public UAnimNotify_PlayParticleEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPlayerChipType ChipType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PSTemplateLv0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PSTemplateLv1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PSTemplateLv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PSTemplateLv3;
    
public:
    UHbkAnimNotify_MacaronWaveEffect();

};

