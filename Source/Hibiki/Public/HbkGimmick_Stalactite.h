#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FallDelegate.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_StalactiteAction.h"
#include "HbkGimmick_StalactiteCameraShake.h"
#include "HbkGimmick_StalactiteDebug.h"
#include "HbkGimmick_StalactiteExplosion.h"
#include "HbkGimmick_StalactiteSound.h"
#include "HbkGimmick_Stalactite.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_Stalactite : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFallDelegate OnStartFall;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFallDelegate OnEndFall;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_StalactiteAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_StalactiteExplosion Explosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_StalactiteSound Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_StalactiteCameraShake CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AttachedRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_StalactiteDebug Debug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bFallen;
    
public:
    AHbkGimmick_Stalactite(const FObjectInitializer& ObjectInitializer);

};

