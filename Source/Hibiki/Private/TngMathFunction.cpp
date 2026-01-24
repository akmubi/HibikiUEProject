#include "TngMathFunction.h"

UTngMathFunction::UTngMathFunction() {
}

bool UTngMathFunction::IsGameplayTagsValid(const FGameplayTagContainer& GameplayTags) {
    return false;
}

FGameplayTag UTngMathFunction::GetGameplayTagFromIndex(const FGameplayTagContainer& NowList, int32 Index) {
    return FGameplayTag{};
}

FGameplayTagContainer UTngMathFunction::FilterGameplayTag(const FGameplayTagContainer& NowList, FGameplayTagContainer MaskTags, bool IsExact) {
    return FGameplayTagContainer{};
}

FVector2D UTngMathFunction::ClampSquare(const FVector2D& NowValue, const FVector2D& MinValue, const FVector2D& MaxValue, const FVector2D& SizeValue, bool& IsClamp) {
    return FVector2D{};
}

FVector UTngMathFunction::ClampSphere(const FVector& NowValue, const FVector& MinValue, const FVector& MaxValue, const FVector& SizeValue, bool ClampFace, bool& IsClamp) {
    return FVector{};
}

float UTngMathFunction::ClampFloat(float NowValue, float MinValue, float MaxValue, float SizeValue, bool& IsClamp) {
    return 0.0f;
}

FVector2D UTngMathFunction::ClampCircle(const FVector2D& NowValue, const FVector2D& MinValue, const FVector2D& MaxValue, const FVector2D& SizeValue, bool ClampFace, bool& IsClamp, float& OutRotate) {
    return FVector2D{};
}

FVector UTngMathFunction::ClampBox(const FVector& NowValue, const FVector& MinValue, const FVector& MaxValue, const FVector& SizeValue, bool& IsClamp) {
    return FVector{};
}

float UTngMathFunction::CalcToValueFromSpring(float NowValue, float TargetValue, float SpeedValue, float SpringValue, float DumpValue, float DeltaTime) {
    return 0.0f;
}

float UTngMathFunction::CalcToValueFromSpeed(float NowValue, float TargetValue, float SpeedValue, float DeltaTime) {
    return 0.0f;
}

float UTngMathFunction::CalcLoopLength(float NowValue, float TargetValue, float MaxValue, float MinValue) {
    return 0.0f;
}

void UTngMathFunction::Blueprint_DoCountFloat(float& NowTime, float DeltaTime, float MaxTime, float& NowValue, float MinValue, float MaxValue, TEnumAsByte<EEasingFunc::Type> EasingFunc, bool IsCountUp, float Exp, int32 Steps, ETngMathFuncCountState& State) {
}

float UTngMathFunction::Blueprint_DoCountdownFloat(float& NowValue, float DeltaValue, float ResetValue, bool IsAccurately, ETngMathFuncCountdownState& State) {
    return 0.0f;
}


