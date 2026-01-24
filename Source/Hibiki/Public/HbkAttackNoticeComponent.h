#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AttackNoticeCreateDelegateDelegate.h"
#include "AttackNoticeInfo.h"
#include "AttackNoticeReadyDelegateDelegate.h"
#include "AttackNoticeRemoveBackDelegateDelegate.h"
#include "AttackNoticeRemoveDelegateDelegate.h"
#include "AttackNoticeVFXParam.h"
#include "AttackNoticeWindowDelegateDelegate.h"
#include "EAttackNoticeExitTiming.h"
#include "EAttackNoticeType.h"
#include "HbkAttackNoticeComponent.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UHbkRhythmSynchroComponent;
class UParticleSystemComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkAttackNoticeComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttackNoticeVFXParam> NoticeVFXList;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachTargetMeshCompName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* NoticeParrySE;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* NoticeDodgeSE;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackNoticeExitTiming NoticeExitTiming;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NoticeAttachSocketName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PlayingNoticePSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USkeletalMeshComponent> MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAkComponent> AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkRhythmSynchroComponent> RSComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttackNoticeInfo> AttackNoticeInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> LoadAssetsPathArray;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackNoticeReadyDelegate OnAttackNoticeReady_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackNoticeWindowDelegate OnAttackNoticeWindow_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackNoticeCreateDelegate OnAttackNoticeCreate_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackNoticeRemoveDelegate OnAttackNoticeRemove_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackNoticeRemoveBackDelegate OnAttackNoticeRemoveBack_Delegate;
    
    UHbkAttackNoticeComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StopByBarTiming(int32 NoteCount);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveNotice();
    
    UFUNCTION(BlueprintCallable)
    void PlayNotice(EAttackNoticeType AttackNoticeType);
    
    // UFUNCTION(BlueprintCallable)
    // FAttackNoticeWindowDelegate GetAttackNoticeWindowDelegate();
    
    // UFUNCTION(BlueprintCallable)
    // FAttackNoticeRemoveDelegate GetAttackNoticeRemoveDelegate();
    
    // UFUNCTION(BlueprintCallable)
    // FAttackNoticeRemoveBackDelegate GetAttackNoticeRemoveBackDelegate();
    
    // UFUNCTION(BlueprintCallable)
    // FAttackNoticeReadyDelegate GetAttackNoticeReadyDelegate();
    
    UFUNCTION(BlueprintCallable)
    TArray<FAttackNoticeInfo> GetAttackNoticeInfoList();
    
    // UFUNCTION(BlueprintCallable)
    // FAttackNoticeCreateDelegate GetAttackNoticeCreateDelegate();
    
    UFUNCTION(BlueprintCallable)
    void EndNotice();
    
    UFUNCTION(BlueprintCallable)
    void EndBackNotice();
    
    UFUNCTION(BlueprintCallable)
    void BeginNotice();
    
    UFUNCTION(BlueprintCallable)
    void BackNotice(int32 NoticeNum);
    
};

