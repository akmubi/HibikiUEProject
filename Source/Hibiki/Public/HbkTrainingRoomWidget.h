#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkTrainingRoomWidget.generated.h"

class AHbkTrainingRoomController;
class UAkAudioEvent;
class UHbkTrainingRoom_ComboPanelWidget;
class UHbkTrainingRoom_ParentWidget;
class UPanelWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTrainingRoomWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkTrainingRoomController* TrainingroomController;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkTrainingRoom_ParentWidget* MainMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkTrainingRoom_ComboPanelWidget* ComboListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* SeletableCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* InAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ReturnToHideoutSE;
    
public:
    UHbkTrainingRoomWidget();

private:
    UFUNCTION(BlueprintCallable)
    void ChangeCurrentMenuPanel();
    
};

