#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EHbkTitleMenuFlowMainState.h"
#include "Templates/SubclassOf.h"
#include "HbkTitleMenuFlowManagerActor.generated.h"

class UAkAudioEvent;
class UHbkBNetModalMasterWidget;
class UHbkDifficultySelectListWidget;
class UHbkMainMenuPageWidget;
class UHbkNoticeScreenWidget;
class UHbkSaveSlotListWidget;
class UHbkTitleMenuCrossFadeWidget;
class UHbkTitleMenuTitleWidget;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class USceneCaptureComponent2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class AHbkTitleMenuFlowManagerActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HideOutSeqName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FirstStageSeqName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkNoticeScreenWidget> NoticeScreenWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTitleMenuTitleWidget> TitleWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkMainMenuPageWidget> TopMenuWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkSaveSlotListWidget> SaveSlotListWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkDifficultySelectListWidget> DifficultySelectWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkBNetModalMasterWidget> BNetWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTitleMenuCrossFadeWidget> CrossFadeWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> HideActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* CaptureRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* CaptureComponent2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CaptureRT_Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CaptureRT_MaterialInst;
    
public:
    AHbkTitleMenuFlowManagerActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartOpMovie();
    
    UFUNCTION(BlueprintCallable)
    bool RSS_ChangeMusicState(UAkAudioEvent* StateEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void QuitGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenStageSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenOption();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenFirstSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenCredit();
    
    UFUNCTION(BlueprintCallable)
    void OnTopMenuWidgetDisplayEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnTitleWidgetDisplayEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnSaveSlotListWidgetDisplayEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnNoticeScreenWidgetWipeStart();
    
    UFUNCTION(BlueprintCallable)
    void OnNoticeScreenWidgetDisplayEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnEndStageSelect();
    
    UFUNCTION(BlueprintCallable)
    void OnEndOption();
    
    UFUNCTION(BlueprintCallable)
    void OnEndOpMovie();
    
    UFUNCTION(BlueprintCallable)
    void OnEndOpEv();
    
    UFUNCTION(BlueprintCallable)
    void OnEndLoadOpEv();
    
    UFUNCTION(BlueprintCallable)
    void OnEndFirstSetting();
    
    UFUNCTION(BlueprintCallable)
    void OnEndCredit();
    
    UFUNCTION(BlueprintCallable)
    void OnEndCameraMove();
    
    UFUNCTION(BlueprintCallable)
    void OnDifficultySelectWidgetDisplayEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeMainState(const EHbkTitleMenuFlowMainState& NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnBNetWidgetDisplayEnd();
    
    UFUNCTION(BlueprintCallable)
    bool LoadSaveSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCameraMoving();
    
};

