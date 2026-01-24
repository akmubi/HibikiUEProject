#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "HbkPlayer_ScrapGuitar.generated.h"

class UHbkBreakableSkeletonComponent;
class UHbkControllableSkeletalMeshComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkPlayer_ScrapGuitar : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBreakableSkeletonComponent* HbkBreakableSkeletonCompLv1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBreakableSkeletonComponent* HbkBreakableSkeletonCompLv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkControllableSkeletalMeshComponent* HbkControllableMeshLv1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkControllableSkeletalMeshComponent* HbkControllableMeshLv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RadialImpulseOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadialImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadialImpulseRadius;
    
public:
    AHbkPlayer_ScrapGuitar(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnPrepareCharge();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnEndedCharge();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnCancelPrepare();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnBeginCharge();
    
    UFUNCTION(BlueprintCallable)
    void Receive_NotifyGatherUp(int32 ChargeLevel, float GatherUpDuration);
    
    UFUNCTION(BlueprintCallable)
    void OnEndedGatherUp();
    
};

