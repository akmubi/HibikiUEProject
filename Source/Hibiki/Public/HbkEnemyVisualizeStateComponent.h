#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkEnemyVisualizeStateParam.h"
#include "HbkEnemyVisualizeStateComponent.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkEnemyVisualizeStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEnemyVisualizeStateParam OverKillVisualizeParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEnemyVisualizeStateParam ToughVisualizeParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PlayingOverkillVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PlayingToughVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ToughHighlightName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TextHeightOffset;
    
public:
    UHbkEnemyVisualizeStateComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnToughDeactive();
    
    UFUNCTION(BlueprintCallable)
    void OnToughActive();
    
    UFUNCTION(BlueprintCallable)
    void OnOverKill();
    
};

