#include "TngActorFunction.h"
#include "Templates/SubclassOf.h"

UTngActorFunction::UTngActorFunction() {
}

FTransform UTngActorFunction::TngGetTransformInActor(AActor* Actor, FName Name, TEnumAsByte<ERelativeTransformSpace> Space) {
    return FTransform{};
}

bool UTngActorFunction::TngAttachToName(AActor* ParentActor, AActor* ChildActor, FName ParentAttachName, FName ChildAttachName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies) {
    return false;
}

void UTngActorFunction::SetShowMeshKit(USkeletalMeshComponent* SkeletalMeshComp, FName MeshKitName, bool bShow, int32 LODIndex) {
}

void UTngActorFunction::SetHitSlowForActor(AActor* Actor, float Duration, float TimeDilation) {
}

void UTngActorFunction::RotationTeleportCharacter(AActor* TargetActor, const FRotator& SetRotation) {
}

void UTngActorFunction::RestartPlayer(AActor* OtherActor, EHbkRestartEventType RestartEventType, const TSubclassOf<UDamageType> DamageTypeClass) {
}

void UTngActorFunction::RemoteEvent(const AActor* Owner, FName EventName) {
}

void UTngActorFunction::PointTeleportCharacter(AActor* TargetActor, const FVector& SetPoint) {
}

void UTngActorFunction::MoveTeleportCharacter(AActor* TargetActor, const FVector& SetVec) {
}

bool UTngActorFunction::IsLoadingLevelStreaming(UObject* WorldContextObject) {
    return false;
}

bool UTngActorFunction::HasActorBegunPlay(AActor* Actor) {
    return false;
}

UHbkPhysicalMaterial* UTngActorFunction::GetPhysicalMaterialFromHitResultDetail(const FHitResult& HitResult, FString& OutCompName) {
    return NULL;
}

UHbkPhysicalMaterial* UTngActorFunction::GetPhysicalMaterialFromHitResult(const FHitResult& HitResult) {
    return NULL;
}

AActor* UTngActorFunction::GetNearActor(const AActor* TargetActor, const TArray<AActor*>& ActorList) {
    return NULL;
}

FVector UTngActorFunction::GetGroundPos(const AActor* Owner, const FVector& BasePos, float CheckLength, bool bTraceComplex, bool bUseOwnerObjectType) {
    return FVector{};
}

void UTngActorFunction::GetActorFeetLocation(const AActor* TargetActor, FVector& FeetLocation) {
}

TEnumAsByte<EPhysicalSurface> UTngActorFunction::FindPhysicalSurface(FName PhysicalSurfaceName) {
    return SurfaceType_Default;
}


