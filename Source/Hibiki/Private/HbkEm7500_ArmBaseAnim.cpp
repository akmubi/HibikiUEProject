#include "HbkEm7500_ArmBaseAnim.h"

UHbkEm7500_ArmBaseAnim::UHbkEm7500_ArmBaseAnim() {
    this->HeadBoneTransformWeight = 1.00f;
    this->IsBreakArm = false;
}

void UHbkEm7500_ArmBaseAnim::SetEnableHeadBoneTransform(bool bEnable) {
}

AHbkEm7500_ArmBase* UHbkEm7500_ArmBaseAnim::GetOwnerArm() const {
    return NULL;
}


