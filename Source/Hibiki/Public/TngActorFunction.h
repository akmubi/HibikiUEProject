#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "Engine/EngineTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EHbkRestartEventType.h"
#include "Templates/SubclassOf.h"
#include "TngActorFunction.generated.h"

class AActor;
class UDamageType;
class UHbkPhysicalMaterial;
class UObject;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class HIBIKI_API UTngActorFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTngActorFunction();

    UFUNCTION(BlueprintCallable)
    static FTransform TngGetTransformInActor(AActor* Actor, FName Name, TEnumAsByte<ERelativeTransformSpace> Space);
    
    UFUNCTION(BlueprintCallable)
    static bool TngAttachToName(AActor* ParentActor, AActor* ChildActor, FName ParentAttachName, FName ChildAttachName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
    
    UFUNCTION(BlueprintCallable)
    static void SetShowMeshKit(USkeletalMeshComponent* SkeletalMeshComp, FName MeshKitName, bool bShow, int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetHitSlowForActor(AActor* Actor, float Duration, float TimeDilation);
    
    UFUNCTION(BlueprintCallable)
    static void RotationTeleportCharacter(AActor* TargetActor, const FRotator& SetRotation);
    
    UFUNCTION(BlueprintCallable)
    static void RestartPlayer(AActor* OtherActor, EHbkRestartEventType RestartEventType, const TSubclassOf<UDamageType> DamageTypeClass);
    
    UFUNCTION(BlueprintCallable)
    static void RemoteEvent(const AActor* Owner, FName EventName);
    
    UFUNCTION(BlueprintCallable)
    static void PointTeleportCharacter(AActor* TargetActor, const FVector& SetPoint);
    
    UFUNCTION(BlueprintCallable)
    static void MoveTeleportCharacter(AActor* TargetActor, const FVector& SetVec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLoadingLevelStreaming(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasActorBegunPlay(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static UHbkPhysicalMaterial* GetPhysicalMaterialFromHitResultDetail(const FHitResult& HitResult, FString& OutCompName);
    
    UFUNCTION(BlueprintCallable)
    static UHbkPhysicalMaterial* GetPhysicalMaterialFromHitResult(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetNearActor(const AActor* TargetActor, const TArray<AActor*>& ActorList);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetGroundPos(const AActor* Owner, const FVector& BasePos, float CheckLength, bool bTraceComplex, bool bUseOwnerObjectType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetActorFeetLocation(const AActor* TargetActor, FVector& FeetLocation);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<EPhysicalSurface> FindPhysicalSurface(FName PhysicalSurfaceName);
    
};

