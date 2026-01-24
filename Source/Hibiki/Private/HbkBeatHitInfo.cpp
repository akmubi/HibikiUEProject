#include "HbkBeatHitInfo.h"

FHbkBeatHitInfo::FHbkBeatHitInfo() {
    this->BeatHitEffectType = EHbkBeatHitEffectType::None;
    this->StartEffect = NULL;
    this->StartNormalSound = NULL;
    this->StartGreatSound = NULL;
    this->bIsTransitAirJamComboAttack = false;
    this->bSkipCheckAirAttackHit = false;
    this->UIOffset = FVector(0.0f);
}

