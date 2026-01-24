#include "HbkPartnerReticleWidget.h"

UHbkPartnerReticleWidget::UHbkPartnerReticleWidget() {
    this->BaseOverlay = NULL;
    this->ImageBorder = NULL;
    this->CenterCircle_Image = NULL;
    this->CenterRaticle_Image = NULL;
    this->UnLockTargetLoop_Anim = NULL;
    this->LockTarget_Anim = NULL;
    this->UnLockTarget_Anim = NULL;
    this->EndTarget_Anim = NULL;
    this->StartTarget_Anim = NULL;
}

void UHbkPartnerReticleWidget::SetPartnerColor(int32 Index) {
}

void UHbkPartnerReticleWidget::Receive_OnUnLock(UHbkPartnerTargetPointComponent* PartnerTargetComp, bool bEndLockOn) {
}

void UHbkPartnerReticleWidget::Receive_OnShowReticle() {
}

void UHbkPartnerReticleWidget::Receive_OnLockon(UHbkPartnerTargetPointComponent* PartnerTargetComp) {
}

void UHbkPartnerReticleWidget::Receive_OnHideReticle(bool bActionSuccess) {
}









