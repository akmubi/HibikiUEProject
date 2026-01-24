#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EHbkEm6000_Check2Direction.h"
#include "EHbkEm6000_Check4Direction.h"
#include "EHbkNote.h"
#include "HbkEm6000_BoxRandomTagData.h"
#include "HbkEm6000_BoxRandomValueData.h"
#include "Templates/SubclassOf.h"
#include "HbkEm6000_BPFunctionLibrary.generated.h"

class AActor;
class AHbkBossStageControllerBase;
class AHbkCharacter;
class UDamageType;
class UHbkAnimInstance;
class UHbkRhythmSynchroComponent;
class UWorld;

UCLASS(Blueprintable)
class UHbkEm6000_BPFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHbkEm6000_BPFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateTailFlameMaterial(UHbkAnimInstance* AnimInstance, const FName& materialSlotName, const FName& SocketName);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateMaterialEmissiveFromBoneParam(UHbkAnimInstance* AnimInstance, const FName& materialSlotName, const FName& SocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SelectBoxRandomValue(UPARAM(Ref) FHbkEm6000_BoxRandomValueData& BoxRandomValueData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag SelectBoxRandomTag(UPARAM(Ref) FHbkEm6000_BoxRandomTagData& BoxRandomTagData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void HitCheckDetail(const AHbkBossStageControllerBase* StageController, const FVector& TraceStart, const FVector& TraceEnd, float CapsuleRadius, EHbkEm6000_Check2Direction CheckDirection, const TArray<AActor*>& IgnoreActors, bool& bOutIsHit, FVector& OutHitLocation, FVector& OutHitFaceNormal, FVector& OutNextMoveVec, EHbkEm6000_Check2Direction& OutCheckDirection, bool bIsDebugDraw);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void HitCheck(const AHbkBossStageControllerBase* StageController, const FVector& TraceStart, const FVector& TraceEnd, float CapsuleRadius, const TArray<AActor*>& IgnoreActors, bool& bOutIsHit, FVector& OutHitLocation, FVector& OutHitFaceNormal, bool bIsDebugDraw);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetRunawayLocation(const AHbkBossStageControllerBase* StageController, float MoveDistance, float MoveDistanceOnHit, FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetPopupEmbankmentStartLocations(const AHbkBossStageControllerBase* StageController, int32 Num, TArray<FVector>& OutStartLocations, int32& OutRestartPointIndex, int32& OutArmstrongStatueIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPlayerSpecifiedDistanceLocation(const AHbkBossStageControllerBase* StageController, float PlayerDistance, FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPlayerSlipAsideLocation(const AHbkBossStageControllerBase* StageController, float MoveDistance, FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetPlayerLandingLocation(const UWorld* World, FVector BaseLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetPlayerCharacterLandingLocation(const UWorld* World, const AHbkCharacter* Character, FVector BaseLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPlayerAroundLocation(const AHbkBossStageControllerBase* StageController, float PlayerDistance, float PlayerDistanceRange, float MoveDistance, float MoveAngle, bool& bOutIsHit, FVector& OutLocation);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<TEnumAsByte<EObjectTypeQuery>> GetObjectTypeQuerysForWall(const AHbkBossStageControllerBase* StageController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<TEnumAsByte<EObjectTypeQuery>> GetObjectTypeQuerysForCharacter(const AHbkBossStageControllerBase* StageController);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetNoteTime(const UHbkRhythmSynchroComponent* RhythmSynchroComponent, EHbkNote NoteType, int32 Count, bool bAdjust);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetNextNoteTime(const UHbkRhythmSynchroComponent* RhythmSynchroComponent, EHbkNote NoteType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovingEmbankmentStartLocations(const AHbkBossStageControllerBase* StageController, float PlayerDistance, int32 Num, TArray<FVector>& OutStartLocations);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetIndexForSplitAngleFromVector(const FVector& Forward, const FVector& ToTarget, int32 SplitNum);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetIndexForSplitAngle(float Angle, int32 SplitNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetEscapeDirectionForShot(const AHbkBossStageControllerBase* StageController, const AActor* Attacker, float CheckLength, EHbkEm6000_Check4Direction& OutCheckDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetEscapeDirectionForMove(const AHbkBossStageControllerBase* StageController, float ForwardCheckLength, float SideCheckLength, EHbkEm6000_Check4Direction& OutCheckDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetEscapeDirection(const AHbkBossStageControllerBase* StageController, float CheckLength, EHbkEm6000_Check4Direction& OutCheckDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetEnemyLandingLocation(const AHbkBossStageControllerBase* StageController, FVector BaseLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetEnemyCharacterLandingLocation(const AHbkBossStageControllerBase* StageController, const AHbkCharacter* Character, FVector BaseLocation);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetDebugCollisionDraw(const AHbkBossStageControllerBase* StageController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ECollisionChannel> GetCollisionChannelForFloor(const AHbkBossStageControllerBase* StageController);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetClosestLocationOnLineFromTarget(const UWorld* World, const FVector& StartLocation, const FVector& EndLocation, const FVector& TargetLocation, bool bIsClamp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetClosestLocationOnLineFromPlayer(const UWorld* World, const FVector& StartLocation, const FVector& EndLocation, bool bIsClamp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetAttackTarget(const AHbkBossStageControllerBase* StageController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAngleFromVector(const FVector& Forward, const FVector& ToTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAngleFromRotaterAngle(float RotaterAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckHitLocation(const AHbkBossStageControllerBase* StageController, const FVector& TraceStart, const FVector& TraceEnd, bool& bOutIsHit, FVector& OutHitLocation, FVector& OutHitFaceNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalcMoveVelocityScale(float AnimMoveLength, float TargetMoveLength, float MinMoveVelocityScale, float MaxMoveVelocityScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AdjustDamageAmmountFromClass(const UWorld* World, TSubclassOf<UDamageType> DamageTypeClass, float& DesiredDamageAmmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AdjustDamageAmmount(const UWorld* World, const UDamageType* DamageType, float& DesiredDamageAmmount);
    
};

