#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg0770Action.h"
#include "HbkGimmick_bg0770EndOverheatInfo.h"
#include "HbkGimmick_bg0770MiniGame.h"
#include "HbkGimmick_bg0770Restart.h"
#include "HbkGimmick_bg0770TagInfo.h"
#include "HbkGimmick_bg0770.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_bg0770 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkOverheat_Delegate, int32, OverheatCount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkBarSyncActivate_Delegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBarSyncActivate_Delegate OnBarSyncActivate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkOverheat_Delegate OnOverheat;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg0770TagInfo OverheatTagInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg0770TagInfo ReturnTagInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg0770TagInfo SignOverheatEndTagInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg0770Action Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_bg0770EndOverheatInfo> EndOverheatInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg0770Restart Restart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg0770MiniGame MiniGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 RestartCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 OverheatCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName EndOverheatInfoTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 PartnerIconState;
    
public:
    AHbkGimmick_bg0770(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopUpdateRestartPoint();
    
    UFUNCTION(BlueprintCallable)
    void SetEndOverheatInfoTag(FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledDeactivateOnRestart(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPreResetPlayerPosition();
    
    UFUNCTION(BlueprintCallable)
    void OnPartnerTargetSuccessAction();
    
    UFUNCTION(BlueprintCallable)
    void OnPartnerTargetFailedAction();
    
    UFUNCTION(BlueprintCallable)
    void OnPartnerTargetEndPartnerMiniGame();
    
    UFUNCTION(BlueprintCallable)
    void OnPartnerTargetDecidedToTarget();
    
    UFUNCTION(BlueprintCallable)
    void OnPartnerTargetBeginPartnerMiniGame();
    
    UFUNCTION(BlueprintCallable)
    void OnOverheatTimerSe(int32 NoteCount, bool bDownBeat);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimStateNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimStateMalfunction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimStateGame() const;
    
};

