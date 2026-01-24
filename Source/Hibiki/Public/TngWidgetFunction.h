#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "Input/Events.h"
#include "Blueprint/UserWidget.h"
#include "ETngKeyAxisMap.h"
#include "ETngKeyButtonMap.h"
#include "TngWidgetFunction.generated.h"

class APlayerController;
class UObject;
class UTextureRenderTarget2D;
class UUserWidget;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable)
class HIBIKI_API UTngWidgetFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTngWidgetFunction();

    UFUNCTION(BlueprintCallable)
    static void PlayTngAnimation(UUserWidget* Target, UWidgetAnimation* InAnimation, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUseGamepad(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsDownStickButton(UObject* WorldContextObject, ETngKeyButtonMap Key, float AxisDeadZone);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector2D GetLastMousePosition(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<ETngKeyButtonMap> GetKeyMouseUpButtons(UObject* WorldContextObject, FPointerEvent InMouseEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<ETngKeyButtonMap> GetKeyMouseDownButtons(UObject* WorldContextObject, FPointerEvent InMouseEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<ETngKeyButtonMap> GetKeyButtons(UObject* WorldContextObject, FKey TargetKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<ETngKeyAxisMap> GetKeyAxis(UObject* WorldContextObject, FKey TargetKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWidget* GetFocusWidgetInAllChildren(UWidget* CheckWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentViewMode(const APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetButtonRelease(UObject* WorldContextObject, ETngKeyButtonMap Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetButtonPressed(UObject* WorldContextObject, ETngKeyButtonMap Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetButtonPress(UObject* WorldContextObject, ETngKeyButtonMap Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetAxisValue(UObject* WorldContextObject, ETngKeyAxisMap Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetAxisRelease(UObject* WorldContextObject, ETngKeyAxisMap Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetAxisPressed(UObject* WorldContextObject, ETngKeyAxisMap Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetAxisPress(UObject* WorldContextObject, ETngKeyAxisMap Key);
    
    UFUNCTION(BlueprintCallable)
    static void DrawWidgetToRenderTarget(UTextureRenderTarget2D* Target, UUserWidget* Widget, FVector2D Size, bool UseGamma, float DeltaTime, FVector2D OffsetPos);
    
};

