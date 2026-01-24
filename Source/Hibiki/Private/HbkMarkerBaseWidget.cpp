#include "HbkMarkerBaseWidget.h"
#include "Templates/SubclassOf.h"

UHbkMarkerBaseWidget::UHbkMarkerBaseWidget() {
    this->TargetPosScale = 1.00f;
}

void UHbkMarkerBaseWidget::RemoveMarker() {
}

bool UHbkMarkerBaseWidget::Function_IsFinish() {
    return false;
}

UHbkMarkerBaseWidget* UHbkMarkerBaseWidget::CreateMarkerFromObject(UObject* WorldContextObject, TSubclassOf<UHbkMarkerBaseWidget> MarkerClass, TSubclassOf<UHbkGameMarkerObject> MarkerObject, UObject* TargetObject) {
    return NULL;
}

UHbkMarkerBaseWidget* UHbkMarkerBaseWidget::CreateMarkerFromLocation(UObject* WorldContextObject, TSubclassOf<UHbkMarkerBaseWidget> MarkerClass, TSubclassOf<UHbkGameMarkerObject> MarkerObject, FVector TargetPosition) {
    return NULL;
}



