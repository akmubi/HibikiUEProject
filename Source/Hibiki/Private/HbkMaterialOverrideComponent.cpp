#include "HbkMaterialOverrideComponent.h"

UHbkMaterialOverrideComponent::UHbkMaterialOverrideComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->SaveType = EHbkMaterailOverride_SaveType::ST_NONE;
    this->SaveExtInt = 0;
    this->LinkToGimmickBase = true;
    this->DefaultActivateFlag = false;
    this->DefaultDeactivateFlag = false;
    this->ResetToDefaultAfterPlaying = false;
    this->EndBattleToDefaultFlag = false;
}

void UHbkMaterialOverrideComponent::OnGimmickComponentDeactivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkMaterialOverrideComponent::OnGimmickComponentDeactivate(AActor* Activator) {
}

void UHbkMaterialOverrideComponent::OnGimmickComponentActivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkMaterialOverrideComponent::OnGimmickComponentActivate(AActor* Activator) {
}

void UHbkMaterialOverrideComponent::OnEndBattle() {
}

void UHbkMaterialOverrideComponent::OnBeginBattle() {
}

void UHbkMaterialOverrideComponent::OnActivateMovieStart(UTexture* NewMediaTexture) {
}

void UHbkMaterialOverrideComponent::OnActivateMovieEnd() {
}

void UHbkMaterialOverrideComponent::OnActivateExtIntMovieStart(UTexture* NewMediaTexture) {
}

void UHbkMaterialOverrideComponent::OnActivateExtIntMovieEnd() {
}

void UHbkMaterialOverrideComponent::CopyMaterialOverrideComp(AActor* pActor) {
}


