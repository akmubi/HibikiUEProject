#pragma once
#include "CoreMinimal.h"
#include "HbkAnimNotifyState_PlayParticleEffect.h"
#include "HbkAnimNotifyState_PlayParticleByBurningState.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UHbkAnimNotifyState_PlayParticleByBurningState : public UHbkAnimNotifyState_PlayParticleEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PSTemplate_OnBurning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugViewBuriningParticle;
    
public:
    UHbkAnimNotifyState_PlayParticleByBurningState();

};

