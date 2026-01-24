#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EHbkEm6000_HatchType.h"
#include "Em6000_PlayerEnteredCurrentHatchSideDelegate.h"
#include "HbkEm6000_StageHatchComponent.generated.h"

class AHbkBlockingVolumeBase;
class AHbkEm6000_SafeRoomLaserControl;
class AHbkGimmick_bg0180;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkEm6000_StageHatchComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEm6000_PlayerEnteredCurrentHatchSide OnPlayerEnteredCurrentHatchSideDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AHbkGimmick_bg0180>> HatchActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkBlockingVolumeBase> BlockingVolumeActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm6000_SafeRoomLaserControl> SafeRoomLaserControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockingVolumeOffsetForLatticeLaserOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockingVolumeOffsetForLatticeLaserOff;
    
public:
    UHbkEm6000_StageHatchComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleCurrentHatchType();
    
    UFUNCTION(BlueprintCallable)
    void SetSystemEnable(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentHatchType(EHbkEm6000_HatchType HatchType);
    
    UFUNCTION(BlueprintCallable)
    void SetActivatedLatticeLaser(bool bIsActivated);
    
    UFUNCTION(BlueprintCallable)
    void OpenHatch(EHbkEm6000_HatchType HatchType);
    
    UFUNCTION(BlueprintCallable)
    void OpenCurrentHatch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSystemEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerEnteredCurrentHatchSide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivatedLatticeLaser() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkEm6000_HatchType GetInverseHatchType(EHbkEm6000_HatchType HatchType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHatchToCenterVector(EHbkEm6000_HatchType HatchType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHatchLocation(EHbkEm6000_HatchType HatchType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkGimmick_bg0180* GetHatchActor(EHbkEm6000_HatchType HatchType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkEm6000_HatchType GetCurrentHatchType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentHatchToCenterVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentHatchLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkGimmick_bg0180* GetCurrentHatchActor() const;
    
};

