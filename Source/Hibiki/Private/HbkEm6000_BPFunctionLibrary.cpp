#include "HbkEm6000_BPFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UHbkEm6000_BPFunctionLibrary::UHbkEm6000_BPFunctionLibrary() {
}

void UHbkEm6000_BPFunctionLibrary::UpdateTailFlameMaterial(UHbkAnimInstance* AnimInstance, const FName& materialSlotName, const FName& SocketName) {
}

void UHbkEm6000_BPFunctionLibrary::UpdateMaterialEmissiveFromBoneParam(UHbkAnimInstance* AnimInstance, const FName& materialSlotName, const FName& SocketName) {
}

int32 UHbkEm6000_BPFunctionLibrary::SelectBoxRandomValue(FHbkEm6000_BoxRandomValueData& BoxRandomValueData) {
    return 0;
}

FGameplayTag UHbkEm6000_BPFunctionLibrary::SelectBoxRandomTag(FHbkEm6000_BoxRandomTagData& BoxRandomTagData) {
    return FGameplayTag{};
}

void UHbkEm6000_BPFunctionLibrary::HitCheckDetail(const AHbkBossStageControllerBase* StageController, const FVector& TraceStart, const FVector& TraceEnd, float CapsuleRadius, EHbkEm6000_Check2Direction CheckDirection, const TArray<AActor*>& IgnoreActors, bool& bOutIsHit, FVector& OutHitLocation, FVector& OutHitFaceNormal, FVector& OutNextMoveVec, EHbkEm6000_Check2Direction& OutCheckDirection, bool bIsDebugDraw) {
}

void UHbkEm6000_BPFunctionLibrary::HitCheck(const AHbkBossStageControllerBase* StageController, const FVector& TraceStart, const FVector& TraceEnd, float CapsuleRadius, const TArray<AActor*>& IgnoreActors, bool& bOutIsHit, FVector& OutHitLocation, FVector& OutHitFaceNormal, bool bIsDebugDraw) {
}

bool UHbkEm6000_BPFunctionLibrary::GetRunawayLocation(const AHbkBossStageControllerBase* StageController, float MoveDistance, float MoveDistanceOnHit, FVector& OutLocation) {
    return false;
}

void UHbkEm6000_BPFunctionLibrary::GetPopupEmbankmentStartLocations(const AHbkBossStageControllerBase* StageController, int32 Num, TArray<FVector>& OutStartLocations, int32& OutRestartPointIndex, int32& OutArmstrongStatueIndex) {
}

bool UHbkEm6000_BPFunctionLibrary::GetPlayerSpecifiedDistanceLocation(const AHbkBossStageControllerBase* StageController, float PlayerDistance, FVector& OutLocation) {
    return false;
}

bool UHbkEm6000_BPFunctionLibrary::GetPlayerSlipAsideLocation(const AHbkBossStageControllerBase* StageController, float MoveDistance, FVector& OutLocation) {
    return false;
}

FVector UHbkEm6000_BPFunctionLibrary::GetPlayerLandingLocation(const UWorld* World, FVector BaseLocation) {
    return FVector{};
}

FVector UHbkEm6000_BPFunctionLibrary::GetPlayerCharacterLandingLocation(const UWorld* World, const AHbkCharacter* Character, FVector BaseLocation) {
    return FVector{};
}

bool UHbkEm6000_BPFunctionLibrary::GetPlayerAroundLocation(const AHbkBossStageControllerBase* StageController, float PlayerDistance, float PlayerDistanceRange, float MoveDistance, float MoveAngle, bool& bOutIsHit, FVector& OutLocation) {
    return false;
}

TArray<TEnumAsByte<EObjectTypeQuery>> UHbkEm6000_BPFunctionLibrary::GetObjectTypeQuerysForWall(const AHbkBossStageControllerBase* StageController) {
    return TArray<TEnumAsByte<EObjectTypeQuery>>();
}

TArray<TEnumAsByte<EObjectTypeQuery>> UHbkEm6000_BPFunctionLibrary::GetObjectTypeQuerysForCharacter(const AHbkBossStageControllerBase* StageController) {
    return TArray<TEnumAsByte<EObjectTypeQuery>>();
}

float UHbkEm6000_BPFunctionLibrary::GetNoteTime(const UHbkRhythmSynchroComponent* RhythmSynchroComponent, EHbkNote NoteType, int32 Count, bool bAdjust) {
    return 0.0f;
}

float UHbkEm6000_BPFunctionLibrary::GetNextNoteTime(const UHbkRhythmSynchroComponent* RhythmSynchroComponent, EHbkNote NoteType) {
    return 0.0f;
}

void UHbkEm6000_BPFunctionLibrary::GetMovingEmbankmentStartLocations(const AHbkBossStageControllerBase* StageController, float PlayerDistance, int32 Num, TArray<FVector>& OutStartLocations) {
}

int32 UHbkEm6000_BPFunctionLibrary::GetIndexForSplitAngleFromVector(const FVector& Forward, const FVector& ToTarget, int32 SplitNum) {
    return 0;
}

int32 UHbkEm6000_BPFunctionLibrary::GetIndexForSplitAngle(float Angle, int32 SplitNum) {
    return 0;
}

void UHbkEm6000_BPFunctionLibrary::GetEscapeDirectionForShot(const AHbkBossStageControllerBase* StageController, const AActor* Attacker, float CheckLength, EHbkEm6000_Check4Direction& OutCheckDirection) {
}

void UHbkEm6000_BPFunctionLibrary::GetEscapeDirectionForMove(const AHbkBossStageControllerBase* StageController, float ForwardCheckLength, float SideCheckLength, EHbkEm6000_Check4Direction& OutCheckDirection) {
}

void UHbkEm6000_BPFunctionLibrary::GetEscapeDirection(const AHbkBossStageControllerBase* StageController, float CheckLength, EHbkEm6000_Check4Direction& OutCheckDirection) {
}

FVector UHbkEm6000_BPFunctionLibrary::GetEnemyLandingLocation(const AHbkBossStageControllerBase* StageController, FVector BaseLocation) {
    return FVector{};
}

FVector UHbkEm6000_BPFunctionLibrary::GetEnemyCharacterLandingLocation(const AHbkBossStageControllerBase* StageController, const AHbkCharacter* Character, FVector BaseLocation) {
    return FVector{};
}

bool UHbkEm6000_BPFunctionLibrary::GetDebugCollisionDraw(const AHbkBossStageControllerBase* StageController) {
    return false;
}

TEnumAsByte<ECollisionChannel> UHbkEm6000_BPFunctionLibrary::GetCollisionChannelForFloor(const AHbkBossStageControllerBase* StageController) {
    return ECC_WorldStatic;
}

FVector UHbkEm6000_BPFunctionLibrary::GetClosestLocationOnLineFromTarget(const UWorld* World, const FVector& StartLocation, const FVector& EndLocation, const FVector& TargetLocation, bool bIsClamp) {
    return FVector{};
}

FVector UHbkEm6000_BPFunctionLibrary::GetClosestLocationOnLineFromPlayer(const UWorld* World, const FVector& StartLocation, const FVector& EndLocation, bool bIsClamp) {
    return FVector{};
}

AActor* UHbkEm6000_BPFunctionLibrary::GetAttackTarget(const AHbkBossStageControllerBase* StageController) {
    return NULL;
}

float UHbkEm6000_BPFunctionLibrary::GetAngleFromVector(const FVector& Forward, const FVector& ToTarget) {
    return 0.0f;
}

float UHbkEm6000_BPFunctionLibrary::GetAngleFromRotaterAngle(float RotaterAngle) {
    return 0.0f;
}

void UHbkEm6000_BPFunctionLibrary::CheckHitLocation(const AHbkBossStageControllerBase* StageController, const FVector& TraceStart, const FVector& TraceEnd, bool& bOutIsHit, FVector& OutHitLocation, FVector& OutHitFaceNormal) {
}

float UHbkEm6000_BPFunctionLibrary::CalcMoveVelocityScale(float AnimMoveLength, float TargetMoveLength, float MinMoveVelocityScale, float MaxMoveVelocityScale) {
    return 0.0f;
}

bool UHbkEm6000_BPFunctionLibrary::AdjustDamageAmmountFromClass(const UWorld* World, TSubclassOf<UDamageType> DamageTypeClass, float& DesiredDamageAmmount) {
    return false;
}

bool UHbkEm6000_BPFunctionLibrary::AdjustDamageAmmount(const UWorld* World, const UDamageType* DamageType, float& DesiredDamageAmmount) {
    return false;
}


