#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkModelViewerWidgetOnCloseDelegate.h"
#include "HbkUserWidget.h"
#include "HbkModelViewerBaseWidget.generated.h"

class UAkAudioEvent;
class UDataTable;
class UHbkModelViewerListPageWidget;
class UHbkModelViewerModelDrawWidget;
class UHbkModelViewerModelIconWidget;
class UHbkModelViewerModelWallpaperWidget;
class UHbkModelViewerPreviewPageWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkModelViewerBaseWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkModelViewerWidgetOnClose OnClose;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ModelControllerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ModelViewerDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OpenSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CloseSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BuySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DecideSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CancelSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PreviewPageCursorSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkModelViewerModelWallpaperWidget* MVWallpaper_UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkModelViewerModelDrawWidget* MVModelDraw_UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkModelViewerPreviewPageWidget* ModelViewerPreviewPage_UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkModelViewerListPageWidget* ModelViewerListPage_UI;
    
public:
    UHbkModelViewerBaseWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestAutoSaveGameOnHideOut();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSelectedMousePressed(UHbkModelViewerModelIconWidget* IconWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedHoldDownCompleted(UHbkModelViewerModelIconWidget* IconWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnModelDrawWidgetMoveEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeSelect(int32 NewSelectNum);
    
};

