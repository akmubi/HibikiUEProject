#pragma once
#include "CoreMinimal.h"
#include "EHbkCharacterShadowType.h"
#include "EHbkDynamicShadowMapType.h"
#include "EHbkEnvShadowType.h"
#include "HbkGimmick_SplineMoveControl_CargoInfo_t.h"
#include "HbkGimmick_SplineMoveControl_Info_t.h"
#include "HbkGimmick_SplineMoveControl_SoundInfo_t.h"
#include "HbkGimmick_TilingSpline.h"
#include "HbkGimmick_SplineMoveControl.generated.h"

class AActor;

UCLASS(Blueprintable)
class AHbkGimmick_SplineMoveControl : public AHbkGimmick_TilingSpline {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSaveActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_SplineMoveControl_CargoInfo_t> CargoInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CargoNoCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CargoCastShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEnvShadowType CargoStaticMeshShadowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkCharacterShadowType CargoSkeletalMeshShadowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkDynamicShadowMapType CargoDynamicShadowMapType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SplineMoveControl_Info_t MoveInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SplineMoveControl_SoundInfo_t soundInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CopySplineActor;
    
public:
    AHbkGimmick_SplineMoveControl(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void RemoveSplineMoveChildActor();
    
    UFUNCTION(BlueprintCallable)
    void OnNoteWhole_SplineMoveControl(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNoteQuarter_SplineMoveControl(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNoteHalf_SplineMoveControl(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNote8th_SplineMoveControl(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNote16th_SplineMoveControl(int32 NoteCount, bool bDownBeat);
    
};

