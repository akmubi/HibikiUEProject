#include "HbkSurfaceAsset.h"

UHbkSurfaceAsset::UHbkSurfaceAsset() {
    this->bFindFirstWhenEmpty = true;
}

UAkAudioEvent* UHbkSurfaceAsset::GetHitSoundWithContainer(const FGameplayTagContainer& HitAttackTypes) const {
    return NULL;
}

UAkAudioEvent* UHbkSurfaceAsset::GetHitSoundFirstFound() const {
    return NULL;
}

UAkAudioEvent* UHbkSurfaceAsset::GetHitSound(const FGameplayTag& HitAttackType) const {
    return NULL;
}

UParticleSystem* UHbkSurfaceAsset::GetHitEffectWithContainer(const FGameplayTagContainer& HitAttackTypes, bool& SpawnAtLocation) const {
    return NULL;
}

UParticleSystem* UHbkSurfaceAsset::GetHitEffectFirstFound(bool& SpawnAtLocation) const {
    return NULL;
}

UParticleSystem* UHbkSurfaceAsset::GetHitEffect(const FGameplayTag& HitAttackType, bool& SpawnAtLocation) const {
    return NULL;
}


