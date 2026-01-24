#include "HbkEnemyInitParamDataRow.h"

FHbkEnemyInitParamDataRow::FHbkEnemyInitParamDataRow() {
    this->Health = 0.00f;
    this->ToughValue = 0.00f;
    this->ToughRecoveryToughByBeat = 0.00f;
    this->ToughRecoveryBeginBeatCount = 0.00f;
    this->ToughDamageByRepelled = 0.00f;
    this->ToughLevel = 0;
    this->DownTimeMultiple = 0.00f;
    this->MoveIdleRatio = 0.00f;
    this->AttackFrequencyRate = 0.00f;
    this->AttackCoolTime = 0.00f;
    this->AttackContinuousCount = 0;
    this->RhythmParryPlayCount = 0;
    this->ReEffectiveTime_Anger = 0.00f;
    this->BarrierDurable = 0.00f;
    this->BarrierRecoveryTime = 0.00f;
    this->ShieldDurable = 0.00f;
    this->ShieldBlockableYawRange = 0.00f;
    this->bIsMultiZoneBlock = false;
    this->bEnableAssist = false;
    this->RhythmTowerAddTime = 0.00f;
}

