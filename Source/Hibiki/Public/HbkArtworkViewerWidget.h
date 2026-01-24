#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkHUDFollowDevice.h"
#include "HbkArtworkViewerWidgetOnCloseDelegate.h"
#include "HbkUserWidget.h"
#include "HbkArtworkViewerWidget.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UHbkArtworkViewerWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkArtworkViewerWidgetOnClose OnClose;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ViewerControllerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* ButtonDescription;
    
public:
    UHbkArtworkViewerWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnLatestFollowDeviceChanged(EHbkHUDFollowDevice LatestDeviceType);
    
};

