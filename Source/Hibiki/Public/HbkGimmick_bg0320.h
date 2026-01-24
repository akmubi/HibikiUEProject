#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmickBase.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_bg0320.generated.h"

class AHbkGimmick_BreakLiftBrake;
class UAkAudioEvent;
class UParticleSystem;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_bg0320 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkGimmick_BreakLiftBrake> BreakStayClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkGimmickBase> BrokenStayClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> AlertSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pAlertSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> FLSparkVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* pFLSparkVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> FRSparkVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* pFRSparkVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> BLSparkVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* pBLSparkVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> BRSparkVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* pBRSparkVFX;
    
public:
    AHbkGimmick_bg0320(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnStartGameOver();
    
    UFUNCTION(BlueprintCallable)
    void OnNoteEvent_bg0320_Lamp(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNoteEvent_bg0320(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnBreak_BrakeFR();
    
    UFUNCTION(BlueprintCallable)
    void OnBreak_BrakeFL();
    
    UFUNCTION(BlueprintCallable)
    void OnBreak_BrakeBR();
    
    UFUNCTION(BlueprintCallable)
    void OnBreak_BrakeBL();
    
public:
    UFUNCTION(BlueprintCallable)
    float GetTransformAlpha();
    
    UFUNCTION(BlueprintCallable)
    FRotator GetRollingRot();
    
    UFUNCTION(BlueprintCallable)
    float GetMonitorTransformAlpha();
    
    UFUNCTION(BlueprintCallable)
    void cs0554toInGameforVFX();
    
    UFUNCTION(BlueprintCallable)
    void cs0554toInGameforLift();
    
};

