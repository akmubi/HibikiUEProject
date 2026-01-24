#include "HbkAnimNotify_DetachFromParent.h"

UHbkAnimNotify_DetachFromParent::UHbkAnimNotify_DetachFromParent() {
    this->LocationRule = EDetachmentRule::KeepRelative;
    this->RotationRule = EDetachmentRule::KeepRelative;
    this->ScaleRule = EDetachmentRule::KeepRelative;
}


