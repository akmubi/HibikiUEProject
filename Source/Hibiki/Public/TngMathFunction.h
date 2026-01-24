#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ETngMathFuncCountState.h"
#include "ETngMathFuncCountdownState.h"
#include "TngMathFunction.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UTngMathFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTngMathFunction();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGameplayTagsValid(const FGameplayTagContainer& GameplayTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetGameplayTagFromIndex(const FGameplayTagContainer& NowList, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTagContainer FilterGameplayTag(const FGameplayTagContainer& NowList, FGameplayTagContainer MaskTags, bool IsExact);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D ClampSquare(const FVector2D& NowValue, const FVector2D& MinValue, const FVector2D& MaxValue, const FVector2D& SizeValue, bool& IsClamp);
    
    UFUNCTION(BlueprintCallable)
    static FVector ClampSphere(const FVector& NowValue, const FVector& MinValue, const FVector& MaxValue, const FVector& SizeValue, bool ClampFace, bool& IsClamp);
    
    UFUNCTION(BlueprintCallable)
    static float ClampFloat(float NowValue, float MinValue, float MaxValue, float SizeValue, bool& IsClamp);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D ClampCircle(const FVector2D& NowValue, const FVector2D& MinValue, const FVector2D& MaxValue, const FVector2D& SizeValue, bool ClampFace, bool& IsClamp, float& OutRotate);
    
    UFUNCTION(BlueprintCallable)
    static FVector ClampBox(const FVector& NowValue, const FVector& MinValue, const FVector& MaxValue, const FVector& SizeValue, bool& IsClamp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalcToValueFromSpring(float NowValue, float TargetValue, float SpeedValue, float SpringValue, float DumpValue, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalcToValueFromSpeed(float NowValue, float TargetValue, float SpeedValue, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalcLoopLength(float NowValue, float TargetValue, float MaxValue, float MinValue);
    
    UFUNCTION(BlueprintCallable)
    static void Blueprint_DoCountFloat(UPARAM(Ref) float& NowTime, float DeltaTime, float MaxTime, float& NowValue, float MinValue, float MaxValue, TEnumAsByte<EEasingFunc::Type> EasingFunc, bool IsCountUp, float Exp, int32 Steps, ETngMathFuncCountState& State);
    
    UFUNCTION(BlueprintCallable)
    static float Blueprint_DoCountdownFloat(UPARAM(Ref) float& NowValue, float DeltaValue, float ResetValue, bool IsAccurately, ETngMathFuncCountdownState& State);
    
};

