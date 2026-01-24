#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg0240_SoundInfo_t.h"
#include "HbkGimmick_bg0240_SwingInfo_t.h"
#include "HbkGimmick_bg0240_VFXInfo_t.h"
#include "HbkGimmick_bg0240.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_bg0240 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg0240_SwingInfo_t swingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg0240_VFXInfo_t vfxInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg0240_SoundInfo_t soundInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bMoveSave;
    
public:
    AHbkGimmick_bg0240(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnMoveEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadSuccessForSplineMove();
    
    UFUNCTION(BlueprintCallable)
    void OnHitEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCommonResourceSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnBeatSyncActivate(int32 NoteCount, bool downBeat);
    
};

