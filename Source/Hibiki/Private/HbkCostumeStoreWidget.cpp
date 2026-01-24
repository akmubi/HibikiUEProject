#include "HbkCostumeStoreWidget.h"

UHbkCostumeStoreWidget::UHbkCostumeStoreWidget() {
    this->ToStoreButton = NULL;
    this->ToEquipButton = NULL;
    this->CloseCategorySound = NULL;
    this->CostumeList = NULL;
    this->CaiPartsSelectBase = NULL;
    this->Hair_Category = NULL;
    this->Inner_Category = NULL;
    this->Jacket_Category = NULL;
    this->Scarf_Category = NULL;
    this->Bottoms_Category = NULL;
    this->Shoes_Category = NULL;
    this->RobotArm_Category = NULL;
    this->Accessory_Category = NULL;
    this->SetUp_Category = NULL;
    this->Guiter_Category = NULL;
    this->CostumeNameBox = NULL;
    this->CostumePrice = NULL;
    this->PurchaseButton = NULL;
    this->CmnHeaderFooterWidget = NULL;
    this->StorePreviewArea = NULL;
    this->EquipPreviewArea = NULL;
    this->ModelDrawWidget = NULL;
    this->ModelBGTexture = NULL;
    this->EquipModelPosition = 0;
    this->StoreModelPosition = 0;
    this->InAnimation = NULL;
    this->SelectCategoryAnim = NULL;
    this->SelectItemAnim = NULL;
    this->MaxRotationSpeed = 80.00f;
    this->RotaionAcceleration = 10.00f;
    this->PrevModelDelayTimeMax = 0.50f;
    this->PrevCostume = NULL;
    this->NowPage = EHbkCostumePageName::EquipPage;
    this->ModelRotationMode = EHbkCostumeModelRotationMode::None;
}

void UHbkCostumeStoreWidget::UpChaiPart() {
}

void UHbkCostumeStoreWidget::ToStorePage(const UHbkButtonBaseWidget* Sender) {
}

void UHbkCostumeStoreWidget::ToEquipPage(const UHbkButtonBaseWidget* Sender) {
}

void UHbkCostumeStoreWidget::SelectItemDirect(int32 Index) {
}

void UHbkCostumeStoreWidget::PurchaseCostume() {
}







void UHbkCostumeStoreWidget::OnHoldDownCompletedPurchaseButton(const UHbkButtonBaseWidget* Sender) {
}

void UHbkCostumeStoreWidget::ModelRotation(float DeltaTime) {
}

void UHbkCostumeStoreWidget::FinishChangePage() {
}

void UHbkCostumeStoreWidget::EquipCostume() {
}

void UHbkCostumeStoreWidget::DownChaiPart() {
}

void UHbkCostumeStoreWidget::DirectSelectionChaiPart(UHbkChaiCostumePartWidget* CategoryWidget) {
}

void UHbkCostumeStoreWidget::DecideReleaseModelRotation() {
}

void UHbkCostumeStoreWidget::DecideReleaseAction() {
}

void UHbkCostumeStoreWidget::DecideModelRotation(EHbkCostumeModelRotationMode RotationMode) {
}

void UHbkCostumeStoreWidget::DecideHOLDAction() {
}

void UHbkCostumeStoreWidget::DecideAction() {
}

void UHbkCostumeStoreWidget::ChangeForm() {
}

void UHbkCostumeStoreWidget::ChangeCharaDirect(EHbkPartnerType CharaType) {
}

void UHbkCostumeStoreWidget::ChangeChara(int32 AddIndex) {
}


