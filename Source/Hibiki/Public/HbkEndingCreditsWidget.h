#pragma once
#include "CoreMinimal.h"
#include "EHbkEndingCreditsDataType.h"
#include "EHbkEndingCreditsSpaceSizeType.h"
#include "EHbkEndingCreditsTextureType.h"
#include "HbkEndingCreditsWidgetOnFinishPlaySceneDelegate.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkEndingCreditsWidget.generated.h"

class UAkAudioEvent;
class UDataTable;
class UHbkCutSceneFooterButtonWidget;
class UHbkEndingCreditsComponentBaseWidget;
class UHbkEndingCreditsSceneWidget;
class UImage;
class UPanelWidget;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkEndingCreditsWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEndingCreditsWidgetOnFinishPlayScene OnFinishPlayScene;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkEndingCreditsSceneWidget> SceneClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkCutSceneFooterButtonWidget> SkipButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkEndingCreditsDataType, TSubclassOf<UHbkEndingCreditsComponentBaseWidget>> ComponentClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkEndingCreditsTextureType, UTexture2D*> TextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkEndingCreditsSpaceSizeType, float> SpaceSizeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LayoutDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LayoutDataTableNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollStartPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WrapTextAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlaySceneSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopSceneSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ScrollMaskTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ScrollMaskBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* SceneArea;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkEndingCreditsSceneWidget* SceneWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkCutSceneFooterButtonWidget* SkipButtonWidget;
    
public:
    UHbkEndingCreditsWidget();

    UFUNCTION(BlueprintCallable)
    void StopScene();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartFadeOut(float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartFadeIn(float Duration);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayScene(float InFadeDuration);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFinishFadeOut();
    
};

