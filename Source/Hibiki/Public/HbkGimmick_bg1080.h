#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_bg1080AnimState.h"
#include "EHbkGimmick_bg1080Type.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg1080Action.h"
#include "HbkGimmick_bg1080GameEnvPhase.h"
#include "HbkGimmick_bg1080Sound.h"
#include "HbkGimmick_bg1080Startup.h"
#include "HbkGimmick_bg1080.generated.h"

class UHbkGameplayTask_ScreenTransition;

UCLASS(Blueprintable)
class AHbkGimmick_bg1080 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGimmick_bg1080_Whiteout);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGimmick_bg1080_StartTransferAnim);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGimmick_bg1080_EndStartup);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGimmick_bg1080_End);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGimmick_bg1080_BrightenedStartup);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg1080_EndStartup OnEndStartup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg1080_StartTransferAnim OnStartTransferAnim;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg1080_Whiteout OnWhiteout;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg1080_End OnEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmick_bg1080Type Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg1080Startup StartUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg1080GameEnvPhase GameEnvPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg1080Action Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg1080Sound Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bTransferred;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_ScreenTransition* ScreenTransitionTask;
    
public:
    AHbkGimmick_bg1080(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ScreenTransitionHalfDuration();
    
    UFUNCTION(BlueprintCallable)
    void ScreenTransitionFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkGimmick_bg1080AnimState GetAnimState() const;
    
};

