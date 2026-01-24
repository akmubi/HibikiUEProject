#include "HbkGimmick_SplineMoveControl_CargoInfo_t.h"

FHbkGimmick_SplineMoveControl_CargoInfo_t::FHbkGimmick_SplineMoveControl_CargoInfo_t() {
    this->MoveClass = NULL;
    this->MoveMesh = NULL;
    this->Index = 0;
    this->Offset = 0.00f;
    this->AdjustDistToLoop = 0.00f;
    this->ChildActorTick = false;
    this->ChildActorSE = false;
    this->DistancePlaySE = 0.00f;
    this->pStaticMeshComp = NULL;
    this->pChildActorComp = NULL;
}

