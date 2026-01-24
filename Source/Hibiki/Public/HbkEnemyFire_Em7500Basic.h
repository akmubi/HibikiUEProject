#pragma once
#include "CoreMinimal.h"
#include "EHbkDifficultyType.h"
#include "HbkEnemyFireBase.h"
#include "HbkEnemyFireEffectData.h"
#include "HbkEnemyFire_Em7500Basic.generated.h"

class UHbkDamageComponent;
class USphereComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEnemyFire_Em7500Basic : public AHbkEnemyFireBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEnemyFireEffectData VFX_Trail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkDifficultyType, float> ActivateOffsetRateByDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkDamageComponent* DamageComponent;
    
public:
    AHbkEnemyFire_Em7500Basic(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnAbortProjectileEvent();
    
};

