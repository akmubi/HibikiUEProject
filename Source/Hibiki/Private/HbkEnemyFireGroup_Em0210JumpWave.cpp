#include "HbkEnemyFireGroup_Em0210JumpWave.h"

AHbkEnemyFireGroup_Em0210JumpWave::AHbkEnemyFireGroup_Em0210JumpWave(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FireSign = NULL;
    this->FireSignDisappear = NULL;
    this->FireSignSpawnSocketName = TEXT("Gun");
    this->InitFireSignScale = 0.10f;
    this->FinalFireSignScale = 2.00f;
    this->FireSignSE = NULL;
    this->FireSignWaitType = EHbkNote::Note_Quarter;
    this->FireSignWaitCount = 0;
    this->FireSignActiveCount = 0;
    this->TgtDistMin = 200.00f;
    this->TgtDistMax = 2000.00f;
    this->CheckTraceChannel = TraceTypeQuery1;
    this->SpawnEmbersDelayCount = 0;
    this->SpawnEmbersFire = NULL;
    this->EmbersOffsetHeight = 40.00f;
    this->bVisibleHitCheck = false;
}


