#include "HbkGimmick_bg0530.h"

AHbkGimmick_bg0530::AHbkGimmick_bg0530(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
}

FRotator AHbkGimmick_bg0530::GetArmRotation(FName SocketName) {
    return FRotator{};
}


