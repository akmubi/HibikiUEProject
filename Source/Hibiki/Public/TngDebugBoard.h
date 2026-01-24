#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "TngDebugBoardDrawDelegate.h"
#include "TngDebugBoardDrawItemDelegate.h"
#include "TngGameSystem.h"
#include "TngDebugBoard.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UTngDebugBoard : public UTngGameSystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngDebugBoardDraw OnDebugBoardDraw;
    
    UTngDebugBoard();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TngDebugDrawLineLocation(UObject* WorldContextObject, const FVector& Location, const FVector& Param, FLinearColor Color, float LineScale, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TngDebugDrawLineActors(UObject* WorldContextObject, const FVector& Location, const TArray<AActor*> Param, FLinearColor Color, float LineScale, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TngDebugDrawLineActor(UObject* WorldContextObject, const FVector& Location, const AActor* Param, FLinearColor Color, float LineScale, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TngDebugDraw3DVector(UObject* WorldContextObject, const FVector& Param, const FVector& Location, FLinearColor Color, float TextScale, float DrawTime, float PopLength);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TngDebugDraw3DText(UObject* WorldContextObject, const FString& Text, const FVector& Location, FLinearColor Color, float TextScale, float DrawTime, float PopLength);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TngDebugDraw3DRotator(UObject* WorldContextObject, const FRotator& Param, const FVector& Location, FLinearColor Color, float TextScale, float DrawTime, float PopLength);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TngDebugDraw3DObject(UObject* WorldContextObject, const UObject* Param, const FVector& Location, FLinearColor Color, float TextScale, float DrawTime, float PopLength);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TngDebugDraw3DInteger(UObject* WorldContextObject, const int32 Param, const FVector& Location, FLinearColor Color, float TextScale, float DrawTime, float PopLength);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TngDebugDraw3DGameplayTags(UObject* WorldContextObject, const FGameplayTagContainer& Param, const FVector& Location, FLinearColor Color, float TextScale, float DrawTime, float PopLength);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TngDebugDraw3DFloat(UObject* WorldContextObject, const float Param, const FVector& Location, FLinearColor Color, float TextScale, float DrawTime, float PopLength);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TngDebugDraw3DBoolean(UObject* WorldContextObject, const bool Param, const FVector& Location, FLinearColor Color, float TextScale, float DrawTime, float PopLength);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TngDebugDraw2DVector(UObject* WorldContextObject, const FVector& Param, float PosX, float PosY, FLinearColor Color, float TextScale, float DrawTime, float PopLength);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TngDebugDraw2DText(UObject* WorldContextObject, const FString& Text, float PosX, float PosY, FLinearColor Color, float TextScale, float DrawTime, float PopLength);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TngDebugDraw2DRotator(UObject* WorldContextObject, const FRotator& Param, float PosX, float PosY, FLinearColor Color, float TextScale, float DrawTime, float PopLength);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TngDebugDraw2DObject(UObject* WorldContextObject, const UObject* Param, float PosX, float PosY, FLinearColor Color, float TextScale, float DrawTime, float PopLength);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TngDebugDraw2DInteger(UObject* WorldContextObject, const int32 Param, float PosX, float PosY, FLinearColor Color, float TextScale, float DrawTime, float PopLength);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TngDebugDraw2DGameplayTags(UObject* WorldContextObject, const FGameplayTagContainer& Param, float PosX, float PosY, FLinearColor Color, float TextScale, float DrawTime, float PopLength);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TngDebugDraw2DFloat(UObject* WorldContextObject, const float Param, float PosX, float PosY, FLinearColor Color, float TextScale, float DrawTime, float PopLength);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TngDebugDraw2DBoolean(UObject* WorldContextObject, const bool Param, float PosX, float PosY, FLinearColor Color, float TextScale, float DrawTime, float PopLength);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString TngBitmapToString(const int32 Param);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void K2_RemoveOnTngDebugBoardDraw(UObject* WorldContextObject, FTngDebugBoardDrawItem Temp);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void K2_EntryOnTngDebugBoardDraw(UObject* WorldContextObject, FTngDebugBoardDrawItem Temp);
    
};

