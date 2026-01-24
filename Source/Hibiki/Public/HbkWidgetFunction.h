#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EHbkStringTableType.h"
#include "HbkWidgetFunction.generated.h"

class UObject;
class UTextureRenderTarget2D;
class UUserWidget;

UCLASS(Blueprintable)
class HIBIKI_API UHbkWidgetFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHbkWidgetFunction();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetText(EHbkStringTableType StringTableType, const FString& Key, bool bEmptyIfMissing);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector2D GetGameViewSize(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void DrawWidgetToRenderTarget(UTextureRenderTarget2D* Target, UUserWidget* Widget, FVector2D Size, bool UseGamma, float DeltaTime, FVector2D OffsetPos);
    
};

