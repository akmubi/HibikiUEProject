#include "HbkGimmick_RhythmLaserAsset.h"

FHbkGimmick_RhythmLaserAsset::FHbkGimmick_RhythmLaserAsset() {
    this->LaserVfxRef = NULL;
    this->LaserLaunchVfxRef = NULL;
    this->LasercOutVfxRef = NULL;
    this->LaserHitVfxRef = NULL;
    this->LaserVfxParamMaxBeamVfxLength = 0.00f;
    this->LaserVfxParamMaxAfterimageLength = 0.00f;
    this->LaserVfxParamMaxAfterimageSpeed0 = 0.00f;
    this->LaserVfxParamMaxAfterimageSpeed1 = 0.00f;
    this->LaserVfxParamMaxRotateAngle = 0.00f;
    this->LaserVfxEndArrivalSpeed = 0.00f;
    this->ShotSeRef = NULL;
    this->RotateShortSeRef = NULL;
    this->RotateLongSeRef = NULL;
    this->WhooshShortSeRef = NULL;
    this->WhooshLongSeRef = NULL;
    this->HumNoisePlaySeRef = NULL;
    this->HumNoiseStopSeRef = NULL;
    this->BeatThreshold = 0;
}

