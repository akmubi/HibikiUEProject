#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HbkRhythmAssistPointComponent.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkRhythmAssistPointComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystem*> JustTimingEffectList;
    
public:
    UHbkRhythmAssistPointComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnJustTimingAction(int32 Count);
    
};

