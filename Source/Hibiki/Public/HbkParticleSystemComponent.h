#pragma once
#include "CoreMinimal.h"
#include "Particles/ParticleSystemComponent.h"
#include "HbkParticleSystemComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkParticleSystemComponent : public UParticleSystemComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipCameraMotionBlur;
    
public:
    UHbkParticleSystemComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSkipCameraMotionBlur(const bool bInSkipCameraMotionBlur);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSkipCameraMotionBlur() const;
    
};

