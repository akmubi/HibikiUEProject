#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "ChOnMontageBlendingOutDelegate.h"
#include "EHbkNote.h"
#include "HbkAnimInstance.generated.h"

class AHbkCharacter;
class AHbkGimmickBase;
class AHbkGimmick_BreakBase;
class AHbkTalkableActor;
class AHbkWeapon;
class UAnimMontage;

UCLASS(Blueprintable, NonTransient)
class HIBIKI_API UHbkAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChOnMontageBlendingOut CharaMontageBlendingOut;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSyncRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote IdleAnimBaseLengthNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleAnimPlayPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote MoveAnimBaseLengthNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveAnimPlayPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote RunAnimBaseLengthNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunAnimPlayPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyncPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SequencerSlotAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SequencerSlotIgnoreOriginAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SequencerEndOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SequencerEndOriginAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableJointChainPhys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DebugDrawStateMachineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDrawSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DebugDrawSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DebugAnimStateOffsetLocation;
    
public:
    UHbkAnimInstance();

    UFUNCTION(BlueprintCallable)
    void StopAnimWithSlot(FName SlotNodeName, float BlendOut);
    
    UFUNCTION(BlueprintCallable)
    void StopAnimWithGroup(FName GroupName, float BlendOut);
    
    UFUNCTION(BlueprintCallable)
    void SetSlotAnimationPosition(FName SlotNodeName, float Position);
    
    UFUNCTION(BlueprintCallable)
    void SetSlotAnimationPlayRate(FName SlotNodeName, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupPlayRate(FName GroupName, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void SetForcePlaySequencer(bool ForcePlay);
    
    UFUNCTION(BlueprintCallable)
    void RequestAnimTransit(FName RequestName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCalcSyncParameter(int32 MusicId);
    
    UFUNCTION(BlueprintCallable)
    void Notify_MontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidAnimTransit(FName RequestName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStateActive(FName MachineName, FName StateName, float ThresholdWeight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingAnySlotAnimation(FName SlotNodeName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingAnimationWithGroup(FName GroupName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMachineActive(FName MachineName, float ThresholdWeight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyStateActive(FName MachineName, const TArray<FName>& StateNames, float ThresholdWeight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStateWeight(FName MachineName, FName StateName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSlotAnimationPosition(FName SlotNodeName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSlotAnimationPlayRate(FName SlotNodeName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMachineWeight(FName MachineName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetJointChainEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkWeapon* GetHbkWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkTalkableActor* GetHbkTalkableActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkGimmick_BreakBase* GetHbkGimmickBreak() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkGimmickBase* GetHbkGimmick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkCharacter* GetHbkCharacter() const;
    
};

