#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmick_RobotArmRailActivatePoint.h"
#include "HbkGimmick_RobotArmRailMovement.h"
#include "HbkGimmick_RobotArmRailPlatform.h"
#include "HbkGimmick_RobotArmRailSound.h"
#include "HbkGimmick_RobotArmRailVfx.h"
#include "HbkGimmick_RobotArmRail_BootupDelegateDelegate.h"
#include "HbkGimmick_RobotArmRail_RhythmSyncDelegateDelegate.h"
#include "HbkGimmick_TilingSpline.h"
#include "HbkGimmick_RobotArmRail.generated.h"

class AActor;

UCLASS(Blueprintable)
class AHbkGimmick_RobotArmRail : public AHbkGimmick_TilingSpline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RobotArmRail_RhythmSyncDelegate RhythmSyncDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RobotArmRail_BootupDelegate BootupDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_RobotArmRailPlatform> Platforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlatformNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RobotArmRailMovement Movement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_RobotArmRailActivatePoint> ActivatePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RobotArmRailVfx Vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RobotArmRailSound Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bActive;
    
public:
    AHbkGimmick_RobotArmRail(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetPlatformObject(int32 Index, AActor* Object);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetPlatformWorldTransform(float Length, bool bUseSplineRotate, FRotator RotationOffset);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetPlatformLocalTransform(float Length, bool bUseSplineRotate, FRotator RotationOffset);
    
    UFUNCTION(BlueprintCallable)
    void ClearPlatformObject();
    
};

