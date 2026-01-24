#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPhotoModeCharacterId.h"
#include "Templates/SubclassOf.h"
#include "HbkPhotoModeController.generated.h"

class AActor;
class AHbkPhotoCameraActor;
class AHbkPhotoCharaActor;
class UAnimSequence;
class UHbkPhotoMenuPageBaseWidget;
class UHbkPhotoMenuPage_FilterWidget;
class UHbkPhotoMenuPage_FrameWidget;
class UHbkPhotoMenuPage_PoseWidget;
class UHbkPhotoMenuPage_StickerWidget;
class UHbkPhotoMenuParentWidget;
class UPhotoModeCharacterDataAsset;
class UPhotoModeFilterDataAsset;
class UPhotoModeFrameDataAsset;
class UPhotoModeStickerDataAsset;

UCLASS(Blueprintable)
class UHbkPhotoModeController : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkPhotoMenuParentWidget> PhotoModeWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkPhotoCameraActor> PhotoCameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkPhotoCharaActor> PhotoChara_PlayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkPhotoMenuParentWidget* PhotoModeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhotoModeFilterDataAsset* FilterDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhotoModeCharacterDataAsset* CharacterDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhotoModeFrameDataAsset* FrameDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhotoModeStickerDataAsset* StickerDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPhotoModeCharacterId, UAnimSequence*> CharacterDefaultMotions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkPhotoCameraActor> PhotoCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> PrevViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkPhotoCharaActor> PhotoChara_Player;
    
public:
    UHbkPhotoModeController();

private:
    UFUNCTION(BlueprintCallable)
    void ResetAll();
    
    UFUNCTION(BlueprintCallable)
    void OnValueResetAll();
    
    UFUNCTION(BlueprintCallable)
    void OnValueChangedPageParameter(UHbkPhotoMenuPageBaseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnValueChangedFilterPresetBlendRatio(UHbkPhotoMenuPage_FilterWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnStartedStickerMode(UHbkPhotoMenuPage_StickerWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedTabChanged(UHbkPhotoMenuParentWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedMotionChanged(UHbkPhotoMenuPage_PoseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedFrameChanged(UHbkPhotoMenuPage_FrameWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedFilterPresetTypeChanged(UHbkPhotoMenuPage_FilterWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedFacialChanged(UHbkPhotoMenuPage_PoseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedCharacterChanged(UHbkPhotoMenuPage_PoseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadCompletedStickerTexture();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadCompletedFrameTexture();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadCompletedCharacterPose();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadCompletedCharacterFacial();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadCompletedCharacterActor();
    
    UFUNCTION(BlueprintCallable)
    void OnEndedWidget(UHbkPhotoMenuParentWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnEndedStickerMode();
    
    UFUNCTION(BlueprintCallable)
    void OnEnabledFilterChanged(UHbkPhotoMenuPage_FilterWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnEnabledCharacterChanged(UHbkPhotoMenuPage_PoseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void End();
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

