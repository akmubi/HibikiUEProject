#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "AttackInterface.h"
#include "EHbkNote.h"
#include "HbkProjectile.generated.h"

class UHbkImproveAttackComponent;
class UHbkRhythmSynchroComponent;
class UMaterialInterface;
class USplineMeshComponent;
class UStaticMesh;
class UTngSplineComponent;

UCLASS(Abstract, Blueprintable)
class HIBIKI_API AHbkProjectile : public AActor, public IAttackInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bContinuousHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote ContinuousHitInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SplineCurveMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SplineCurveMeshMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveMeshScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroComponent* RhythmSynchro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkImproveAttackComponent* AttackComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngSplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> PointsArray;
    
public:
    AHbkProjectile(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnStartMove(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void OnRhythmAttackNoticeTrigger();
    
    UFUNCTION(BlueprintCallable)
    void OnLaunchOwnerDied();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTargetPos() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkRhythmSynchroComponent* GetRhythmSynchro() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkRhythmSynchroComponent* GetOwnerRhythmSynchro() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_StartMove();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_EndMove();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_DoLaunch(const FVector& Direction, int32 LaunchingNoteCount);
    

    // Fix for true pure virtual functions not being implemented
};

