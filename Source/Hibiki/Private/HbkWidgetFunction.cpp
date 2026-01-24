#include "HbkWidgetFunction.h"

UHbkWidgetFunction::UHbkWidgetFunction() {
}

FText UHbkWidgetFunction::GetText(EHbkStringTableType StringTableType, const FString& Key, bool bEmptyIfMissing) {
    return FText::GetEmpty();
}

FVector2D UHbkWidgetFunction::GetGameViewSize(UObject* WorldContextObject) {
    return FVector2D{};
}

void UHbkWidgetFunction::DrawWidgetToRenderTarget(UTextureRenderTarget2D* Target, UUserWidget* Widget, FVector2D Size, bool UseGamma, float DeltaTime, FVector2D OffsetPos) {
}


