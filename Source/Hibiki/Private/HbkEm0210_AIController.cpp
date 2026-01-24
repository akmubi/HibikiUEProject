#include "HbkEm0210_AIController.h"

AHbkEm0210_AIController::AHbkEm0210_AIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttackLoopCount = 0;
}

int32 AHbkEm0210_AIController::GetAttackLoopCount() const {
    return 0;
}


