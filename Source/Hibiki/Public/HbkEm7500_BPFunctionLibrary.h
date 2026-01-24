#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "HbkEm7500_BPFunctionLibrary.generated.h"

class AActor;
class AHbkBossStageControllerBase;

UCLASS(Blueprintable)
class UHbkEm7500_BPFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHbkEm7500_BPFunctionLibrary();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void HitCheck(const AHbkBossStageControllerBase* StageController, const FVector& TraceStart, const FVector& TraceEnd, float CapsuleRadius, const TArray<AActor*>& IgnoreActors, bool& bOutIsHit, FVector& OutHitLocation, FVector& OutHitFaceNormal, bool bIsDebugDraw);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPlayerAroundLocation(const AHbkBossStageControllerBase* StageController, float PlayerDistance, float PlayerDistanceRange, float MoveDistance, float MoveAngle, bool& bOutIsHit, FVector& OutLocation, bool bIsDebugDraw);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<TEnumAsByte<EObjectTypeQuery>> GetObjectTypeQuerys(const AHbkBossStageControllerBase* StageController);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetAttackTarget(const AHbkBossStageControllerBase* StageController);
    
};

