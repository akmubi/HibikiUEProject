#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttackInterface.h"
#include "EHbkGimmickCurveType_t.h"
#include "EHbkNote.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_GiantRobotBeamAttack.h"
#include "HbkGimmick_GiantRobotBeamCameraShake.h"
#include "HbkGimmick_GiantRobotBeamVfx.h"
#include "HbkGimmick_GiantRobotBeam.generated.h"

class UHbkGameplayTask_LoopCameraShake;

UCLASS(Blueprintable)
class AHbkGimmick_GiantRobotBeam : public AHbkGimmickBase, public IAttackInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoDeactivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_GiantRobotBeamAttack Attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickCurveType_t ScaleUpCurveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickCurveType_t ScaleDownCurveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LifeSpanNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GameEnvRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameEnvTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_GiantRobotBeamVfx Vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_GiantRobotBeamCameraShake CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_LoopCameraShake* LoopCameraShakeTask;
    
public:
    AHbkGimmick_GiantRobotBeam(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

