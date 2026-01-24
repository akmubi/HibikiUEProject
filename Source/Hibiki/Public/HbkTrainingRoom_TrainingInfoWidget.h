#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkTrainingRoom_TrainingInfoWidget.generated.h"

class AHbkTrainingRoomController;
class UHbkTrainingRoom_ComboCheckWidget;
class UHbkTrainingRoom_SideMenuWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTrainingRoom_TrainingInfoWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkTrainingRoom_ComboCheckWidget* ComboCheckWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkTrainingRoom_SideMenuWidget* SideMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* InAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkTrainingRoomController* TrainingroomController;
    
public:
    UHbkTrainingRoom_TrainingInfoWidget();

};

