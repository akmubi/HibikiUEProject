#pragma once
#include "CoreMinimal.h"
#include "FHbkGimmick_SpectraDoorAnimState.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_SpectraDoorTeleport.h"
#include "HbkTalkContext.h"
#include "HbkGimmick_SpectraDoor.generated.h"

class AHbkSpectraRoomController;
class UHbkGameplayTask_ScreenTransition;
class UHbkSpectraRoomSettingsDataAsset;

UCLASS(Blueprintable)
class AHbkGimmick_SpectraDoor : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkSpectraRoomSettingsDataAsset* SettingsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpectraRoomName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SpectraDoorTeleport Teleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_ScreenTransition* ScreenTransitionTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkSpectraRoomController* SpectraRoomController;
    
public:
    AHbkGimmick_SpectraDoor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ScreenTransitionHalfDuration();
    
    UFUNCTION(BlueprintCallable)
    void ScreenTransitionFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnTalkEnded(const FHbkTalkContext TalkContext);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenAnim();
    
    UFUNCTION(BlueprintCallable)
    void OnJoinedPartner();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHbkGimmick_SpectraDoorAnimState GetAnimState() const;
    
};

