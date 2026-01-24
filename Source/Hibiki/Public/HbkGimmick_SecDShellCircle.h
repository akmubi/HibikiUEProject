#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_SecDShellCircle.generated.h"

class UAkAudioEvent;
class UMeshComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_SecDShellCircle : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSaveChaiRouteActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSavePepperRouteSignDisappear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSavePepperRouteActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSaveMacaronRouteActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSaveMacaronRouteSignDisappear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> DisappearSignSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pDisappearSignSE;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BattleScaleMove;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* pCenterMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* pPepperClosedSignMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* pMacaronClosedSignMeshComp;
    
public:
    AHbkGimmick_SecDShellCircle(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPeppermintRouteSignDisappearStart(float SpeedRate);
    
    UFUNCTION(BlueprintCallable)
    void SetPeppermintRoute(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetMacaronRouteSignDisappearStart(float sppedRate);
    
    UFUNCTION(BlueprintCallable)
    void SetMacaronRoute(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetChaiRoute(bool Flag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnNoteWhole_SecDShellCircle(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNoteQuarter_SecDShellCircle(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNoteHalf_SecDShellCircle(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNote8th_SecDShellCircle(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNote16th_SecDShellCircle(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnEndBattle_SecDShellCircle();
    
    UFUNCTION(BlueprintCallable)
    void OnCommonResourceSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginBattle_SecDShellCircle();
    
};

