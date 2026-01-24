#pragma once
#include "CoreMinimal.h"
#include "HbkDialogWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkPopupDialogWidget.generated.h"

class UAkAudioEvent;
class UHbkDialogItemWidget;
class UPanelWidget;
class URichTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkPopupDialogWidget : public UHbkDialogWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkDialogItemWidget> ItemWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OpenSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DecideSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CancelSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SelectSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ButtonPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* MessageTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OpenAnimation;
    
public:
    UHbkPopupDialogWidget();

private:
    UFUNCTION(BlueprintCallable)
    void SelectButton_MouseHovered(UHbkDialogItemWidget* ItemWidget);
    
};

