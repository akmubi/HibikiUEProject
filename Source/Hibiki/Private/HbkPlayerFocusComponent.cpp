#include "HbkPlayerFocusComponent.h"

UHbkPlayerFocusComponent::UHbkPlayerFocusComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SearchNearRadius = 600.00f;
    this->SearchPrevTargetRadius = 450.00f;
    this->SearchInputRadius = 400.00f;
    this->SearchDirectionRadius = 400.00f;
    this->SearchFarRadius = 3000.00f;
    this->SearchHeightLimit = 200.00f;
    this->SearchAirHeightLimit = 300.00f;
    this->SearchRadiusForPartner = 1000.00f;
    this->InputDirAngle = 60.00f;
    this->PlayerDirAngle = 75.00f;
    this->FindAttackTargetTraceChannel = TraceTypeQuery1;
    this->FocusTraceChannel = TraceTypeQuery1;
    this->ItemTraceRadius = 100.00f;
    this->ItemTraceAddRadiusBase = 100.00f;
    this->ItemTraceChannel = TraceTypeQuery1;
    this->ItemLineTraceChannel = TraceTypeQuery1;
}


