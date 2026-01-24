#include "HbkGimmickManager.h"
#include "Templates/SubclassOf.h"

UHbkGimmickManager::UHbkGimmickManager() {
    this->hitInCurve = NULL;
    this->hitIn2Curve = NULL;
    this->pureFlatHitInCurve = NULL;
    this->pulseCurve = NULL;
    this->hitOutCurve = NULL;
    this->hitOutImmediateCurve = NULL;
    this->hitOutSmoothCurve = NULL;
    this->hitOutSmoothOneBeatCurve = NULL;
    this->hitOutStrongCurve = NULL;
    this->buttonCurve = NULL;
    this->flatCurve = NULL;
    this->pureFlatCurve = NULL;
    this->splinePointMoveCurve = NULL;
    this->ScaleCurve = NULL;
    this->scaleDelayCurve = NULL;
    this->pendulumCurve = NULL;
}

void UHbkGimmickManager::UpdateSpectraRoomClearState(UObject* WorldContextObject) {
}

void UHbkGimmickManager::SetEmissiveTextureParamForBP(UObject* WorldContextObject, UMeshComponent* pMeshComp, TEnumAsByte<EHbkGimmick_LightEmissiveColorType_t> Type, TEnumAsByte<EHbkGimmick_LightEmissiveKindType_t> kind, const float Intensity, const int32 Index) {
}

void UHbkGimmickManager::SetEmissiveIntensityParamForBP(UObject* WorldContextObject, UMeshComponent* pMeshComp, TEnumAsByte<EHbkGimmick_LightEmissiveColorType_t> Type, const float Intensity, const int32 Index) {
}

void UHbkGimmickManager::ReportSubMissionCompleted(UObject* WorldContextObject) {
}

void UHbkGimmickManager::OrderSubMission(UObject* WorldContextObject) {
}

bool UHbkGimmickManager::IsSubMissionInProgress(UObject* WorldContextObject) {
    return false;
}

bool UHbkGimmickManager::IsSubMisisonsCompleted(UObject* WorldContextObject) {
    return false;
}

bool UHbkGimmickManager::IsReportCompletedSubMission(UObject* WorldContextObject) {
    return false;
}

UHbkSpectraBattleController* UHbkGimmickManager::GetSpectraBattleController(UObject* WorldContextObject) {
    return NULL;
}

float UHbkGimmickManager::GetCurveValue(const float Time, EHbkGimmickCurveType_t curveType, bool CalcTimeRate) {
    return 0.0f;
}

void UHbkGimmickManager::FailedSubMission(UObject* WorldContextObject) {
}

void UHbkGimmickManager::DestroySpectraBattleController(UObject* WorldContextObject) {
}

void UHbkGimmickManager::CreateSpectraBattleController(UObject* WorldContextObject, TSubclassOf<UHbkSpectraBattleController> SpectraBattleControllerClass) {
}

void UHbkGimmickManager::AddSubMisisonProgress(UObject* WorldContextObject) {
}

void UHbkGimmickManager::ActivateSpectraCheckPoint(UObject* WorldContextObject) {
}


