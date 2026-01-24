#include "HbkMaterialParameterOverride.h"

UHbkMaterialParameterOverride::UHbkMaterialParameterOverride(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->bSaveType = EHbkMaterialParameterOverride_SaveType::ST_NONE;
    this->bSaveExtIntValue = 0;
}

void UHbkMaterialParameterOverride::OnGimmickComponentEndBattle() {
}

void UHbkMaterialParameterOverride::OnGimmickComponentDeactivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkMaterialParameterOverride::OnGimmickComponentDeactivate(AActor* Activator) {
}

void UHbkMaterialParameterOverride::OnGimmickComponentBeginBattle() {
}

void UHbkMaterialParameterOverride::OnGimmickComponentActivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkMaterialParameterOverride::OnGimmickComponentActivate(AActor* Activator) {
}


