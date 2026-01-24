#include "HbkMarker3DWidget.h"

UHbkMarker3DWidget::UHbkMarker3DWidget() {
    this->bHasScriptImplementedTick = false;
}

void UHbkMarker3DWidget::SetTargetPosition(FVector NewTargetPos) {
}

FVector2D UHbkMarker3DWidget::GetDrawPosition() {
    return FVector2D{};
}

bool UHbkMarker3DWidget::Function_IsWindowInTarget() {
    return false;
}




