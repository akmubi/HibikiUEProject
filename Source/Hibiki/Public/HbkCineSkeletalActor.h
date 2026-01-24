#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Matinee/MatineeAnimInterface.h"
#include "HbkCineSkeletalActor.generated.h"

class UAnimInstance;
class UHbkCineActorGraphicsComponent;
class UHbkCineToonShadingComponent;
class UHbkGameAgentComponent;
class UHbkSkeletalMeshComponent;
class UMaterialInterface;
class UPhysicsAsset;
class USceneComponent;
class USkeletalMesh;

UCLASS(Blueprintable)
class HIBIKI_API AHbkCineSkeletalActor : public AActor, public IMatineeAnimInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedMesh, meta=(AllowPrivateAccess=true))
    USkeletalMesh* ReplicatedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedPhysAsset, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* ReplicatedPhysAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedMaterial0, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ReplicatedMaterial0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedMaterial1, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ReplicatedMaterial1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRenamed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldDoAnimNotifies: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRootComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* SkeletalMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCineActorGraphicsComponent* CineGraphicsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCineToonShadingComponent* CineToonShadingComponent;
    
public:
    AHbkCineSkeletalActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedPhysAsset();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedMesh();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedMaterial1();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedMaterial0();
    
    UFUNCTION(BlueprintCallable)
    bool K2_SetActorLocationFromFeet(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimInstance* GetAnimInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActorLocationAtFeet() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnChangedHiddenInGame(bool NewHidden);

    virtual void BeginAnimControl(class UInterpGroup* InInterpGroup) override;
    virtual void SetAnimPosition(FName SlotName, int32 ChannelIndex, class UAnimSequence* InAnimSequence, float InPosition, bool bFireNotifies, bool bLooping) override;
    virtual void FinishAnimControl(class UInterpGroup* InInterpGroup) override;
};

