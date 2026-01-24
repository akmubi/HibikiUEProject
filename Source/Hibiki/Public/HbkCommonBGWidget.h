#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkCommonBGWidget.generated.h"

class UBackgroundBlur;
class UImage;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkCommonBGWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CopyBackGroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BGWidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBackgroundBlur* CopyBackgroundBlur;
    
public:
    UHbkCommonBGWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UImage* GetImage() const;
    
};

