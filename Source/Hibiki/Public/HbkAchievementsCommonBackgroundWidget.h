#pragma once
#include "CoreMinimal.h"
#include "EHbkHUDFollowDevice.h"
#include "HbkUserWidget.h"
#include "HbkAchievementsCommonBackgroundWidget.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkAchievementsCommonBackgroundWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* ButtonDescription;
    
public:
    UHbkAchievementsCommonBackgroundWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnLatestFollowDeviceChanged(EHbkHUDFollowDevice LatestDeviceType);
    
};

