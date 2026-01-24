#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "HbkHitEffectInfo.h"
#include "HbkSurfaceAsset.generated.h"

class UAkAudioEvent;
class UParticleSystem;

UCLASS(Blueprintable)
class HIBIKI_API UHbkSurfaceAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SurfaceTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkHitEffectInfo> HitEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkHitEffectInfo BlockEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkHitEffectInfo GuardEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFindFirstWhenEmpty;
    
public:
    UHbkSurfaceAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAkAudioEvent* GetHitSoundWithContainer(const FGameplayTagContainer& HitAttackTypes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAkAudioEvent* GetHitSoundFirstFound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAkAudioEvent* GetHitSound(const FGameplayTag& HitAttackType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParticleSystem* GetHitEffectWithContainer(const FGameplayTagContainer& HitAttackTypes, bool& SpawnAtLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParticleSystem* GetHitEffectFirstFound(bool& SpawnAtLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParticleSystem* GetHitEffect(const FGameplayTag& HitAttackType, bool& SpawnAtLocation) const;
    
};

