#pragma once
#include "CoreMinimal.h"
#include "Animation/WidgetAnimation.h"
#include "EHbkMusicTitleTimingType.h"
#include "HbkUserWidget.h"
#include "HbkMusicTitleWidget.generated.h"

class UImage;
class UTexture2D;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UHbkMusicTitleWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SongImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeSongImageAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvent FinishedFadeAnimationDelegate;
    
public:
    UHbkMusicTitleWidget();

    UFUNCTION(BlueprintCallable)
    void ShowAndSetTexture(UTexture2D* Tex);
    
    UFUNCTION(BlueprintCallable)
    void Show(EHbkMusicTitleTimingType Type);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishedFadeAnimation();
    
public:
    UFUNCTION(BlueprintCallable)
    void Hide();
    
};

